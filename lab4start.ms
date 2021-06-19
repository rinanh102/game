function drawSeg numPlanks fenceAngle start colour = (
	post = box pos: [start.x, start.y, 0] wirecolor:colour height:150 width:20 length:20 heightsegs:1 widthsegs:1 lengthsegs:1
	
	post2 = box pos: [start.x, start.y, 0] wirecolor:colour height:150 width:20 length:20 heightsegs:1 widthsegs:1 lengthsegs:1
	move post2 [200,0,0] 
	
	bottombeam = box pos: [start.x, start.y, 0] wirecolor:colour height:20 width:200 length:5 heightsegs:1 widthsegs:1 lengthsegs:1
	move bottombeam [100,0,30]
	
	topbeam = box pos: [start.x, start.y, 0] wirecolor:colour height:20 width:200 length:5 heightsegs:1 widthsegs:1 lengthsegs:1
	move topbeam [100,0,90] 
	rotationQuat = quat fenceAngle [0,0,1]
	rotate post rotationQuat
	
	for i=1 to numPlanks do (
			b = box pos: [(start.x + i*20 ), start.y, 20] wirecolor:colour height:110 width:5 length:10 heightsegs:1 widthsegs:1 lengthsegs:1
		
		)
	)


function drawFence numSeg numPlanks fenceAngle start colour = (
	drawSeg numPlanks fenceAngle start colour

)

function main = (
	drawFence 5 9 0 [0,0] (color 0 0 255)
	)
	
main()