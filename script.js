target = $('.browser-frame');
Draggable.create(target, { trigger: "#drag-handle"});

var handleResize = $("<div class='resize-handle'></div>").appendTo(target);

Draggable.create(handleResize, {
	type:"top,left",
	onPress: function(e) {
		e.stopPropagation(); 
	},
	onDrag: function(e) {
		parent = this.target.parentNode
		TweenLite.set(parent, { width: this.x, height: this.y - 132 - 55});
	}
});
