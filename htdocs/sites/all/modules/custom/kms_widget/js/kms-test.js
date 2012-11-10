// KMS Widget JS

jQuery(function() { init(); });

function init() {

    kmsticket: '',
	  
    kmsticket = new VisStedet.Ticket();
	
    var map = new OpenLayers.Map(
        'mapTag',
        {
            projection: 'EPSG:25832',
            units: 'm',
            maxExtent: new OpenLayers.Bounds(120000,5661139.2,1000000,6500000.0),
            maxResolution: 1638.4,
		    numZoomLevels: 12,
		    controls : []
        }
    );
	
	var wmts = new OpenLayers.Layer.WMTS({
		name: "WMTS",
		url: ["http://a.kortforsyningen.kms.dk/topo_skaermkort", 
		      "http://b.kortforsyningen.kms.dk/topo_skaermkort", 
		      "http://c.kortforsyningen.kms.dk/topo_skaermkort"],
		style: "default",
		layer: "dtk_skaermkort",
		matrixSet: "View1",
		format: "image/jpeg",
		params: {
			ticket: kmsticket
		},
		matrixIds: [
			{identifier: "L00", scaleDenominator: 1638.4/0.00028},
			{identifier: "L01", scaleDenominator: 819.2/0.00028},
			{identifier: "L02", scaleDenominator: 409.6/0.00028},
			{identifier: "L03", scaleDenominator: 204.8/0.00028},
			{identifier: "L04", scaleDenominator: 102.4/0.00028},
			{identifier: "L05", scaleDenominator: 51.2/0.00028},
			{identifier: "L06", scaleDenominator: 25.6/0.00028},
			{identifier: "L07", scaleDenominator: 12.8/0.00028},
			{identifier: "L08", scaleDenominator: 6.4/0.00028},
			{identifier: "L09", scaleDenominator: 3.2/0.00028},
			{identifier: "L10", scaleDenominator: 1.6/0.00028},
			{identifier: "L11", scaleDenominator: 0.8/0.00028}
		],
		isBaseLayer : true,
		displayInLayerSwitcher : true,
		transitionEffect : 'resize'
	});
    map.addLayer(wmts);
	
	// The buttons and bar in upper left corner:
	map.addControl(new OpenLayers.Control.PanZoomBar());

	// All mouse controls (drag, zoom with mouse wheel. etc)
	map.addControl(new OpenLayers.Control.Navigation());

	// Layer selector in upper right corner. (Base layers show as choices between
	// radio buttons, other layers as selectable checkboxes):
	//map.addControl(new OpenLayers.Control.LayerSwitcher());
	
	// Default center and zoom on Copenhagen
	map.setCenter(new OpenLayers.LonLat(724500, 6176450), 10);
	map.addControl(new OpenLayers.Control.PanZoomBar());
    map.addControl(new OpenLayers.Control.Navigation());
}
