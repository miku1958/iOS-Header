 protocol KnowledgeGraphKit.MAClassifier // 2 requirements
 {
	// method
	// method
 }
 protocol KnowledgeGraphKit.MAGraphSparseMatrix // 1 requirements
 {
	// method
 }
 protocol KnowledgeGraphKit.MAFeatureDefinitionExtraction // 1 requirements
 {
	// method
 }
 protocol KnowledgeGraphKit.MAGraphTensor // 1 requirements
 {
	// method
 }
 protocol KnowledgeGraphKit.MAGraphMatrix // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol KnowledgeGraphKit.MAGraphSimilarity // 1 requirements
 {
	// method
 }

 class KnowledgeGraphKit.MASparseSquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MASparseMatrix
	let nodes : [MANode]

	// Swift methods
	0x2040  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x20d0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2190  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2410  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2550  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x2630  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
 }

 class KnowledgeGraphKit.MADistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let projections : [MANode : Set<MANode>] // +0x10 (0x8)
	let weights : [MANode : Double]? // +0x18 (0x8)
	var $__lazy_storage_$_weightsVector : MAVectorRepresentation? // +0x20 (0x8)
	var $__lazy_storage_$_sourceWeightsVector : MAVectorRepresentation? // +0x28 (0x8)
	var $__lazy_storage_$_targetWeightsVector : MAVectorRepresentation? // +0x30 (0x8)
	var $__lazy_storage_$_projectionMatrix : MAMatrixRepresentation? // +0x38 (0x8)
	var $__lazy_storage_$_weightedProjectionMatrix : MAMatrixRepresentation? // +0x40 (0x8)
	var $__lazy_storage_$_projectionGraph : MAGraph? // +0x48 (0x8)
	var $__lazy_storage_$_sourceSingletons : Set<MANode>? // +0x50 (0x8)
	var $__lazy_storage_$_targetSingletons : Set<MANode>? // +0x58 (0x8)
	var $__lazy_storage_$_adjacencyMatrix : MAAdjacencyMatrixRepresentation? // +0x60 (0x8)
	var $__lazy_storage_$_sourceDegreeVector : MAVectorRepresentation? // +0x68 (0x8)
	var $__lazy_storage_$_sourceDegreeMatrix : MASquareMatrixRepresentation? // +0x70 (0x8)
	var $__lazy_storage_$_targetDegreeVector : MAVectorRepresentation? // +0x78 (0x8)
	var $__lazy_storage_$_targetDegreeMatrix : MASquareMatrixRepresentation? // +0x80 (0x8)
	var $__lazy_storage_$_weightedSourceDegreeVector : MAVectorRepresentation? // +0x88 (0x8)
	var $__lazy_storage_$_weightedsourceDegreeMatrix : MASquareMatrixRepresentation? // +0x90 (0x8)
	var $__lazy_storage_$_weightedTargetDegreeVector : MAVectorRepresentation? // +0x98 (0x8)
	var $__lazy_storage_$_weightedTargetDegreeMatrix : MASquareMatrixRepresentation? // +0xa0 (0x8)
	var $__lazy_storage_$_maximumSimilarityDistance : Double? // +0xa8 (0x9)
	var $__lazy_storage_$_sourceSimilarityMatrix : MASquareMatrixRepresentation? // +0xb8 (0x8)
	var $__lazy_storage_$_sourceSimilarityIdentityVector : MAVectorRepresentation? // +0xc0 (0x8)
	var $__lazy_storage_$_sourceCommonalityMatrix : MASquareMatrixRepresentation? // +0xc8 (0x8)
	var $__lazy_storage_$_targetCommonalityMatrix : MASquareMatrixRepresentation? // +0xd0 (0x8)
	var $__lazy_storage_$_sourceIdentityCommonalityMatrix : MASquareMatrixRepresentation? // +0xd8 (0x8)
	var $__lazy_storage_$_targetIdentityCommonalityMatrix : MASquareMatrixRepresentation? // +0xe0 (0x8)

	// Swift methods
	0x7390  class func MADistribution.__allocating_init(projections:weights:) // init 
	0x7500  class func MADistribution.__allocating_init(distributions:) // init 
	0x75f0  func MADistribution.sources.getter // getter 
	0x7830  func MADistribution.targets.getter // getter 
	0x7be0  func MADistribution.size.getter // getter 
	0x7e70  func MADistribution.count.getter // getter 
	0x7ea0  func MADistribution.fullSize.getter // getter 
	0x7fa0  func MADistribution.weight(node:) // method 
	0x87a0  func MADistribution.weightsVector.getter // getter 
	0x91a0  func MADistribution.weightsVector.setter // setter 
	0x91c0  func MADistribution.weightsVector.modify // modifyCoroutine 
	0x9250  func MADistribution.sourceWeightsVector.getter // getter 
	0x9900  func MADistribution.sourceWeightsVector.setter // setter 
	0x9920  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0x99b0  func MADistribution.targetWeightsVector.getter // getter 
	0xa210  func MADistribution.targetWeightsVector.setter // setter 
	0xa230  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0xa2c0  func MADistribution.merge(distributions:) // method 
	0xa3d0  func MADistribution.subset(sources:) // method 
	0xa540  func MADistribution.subset(targets:) // method 
	0xb610  func MADistribution.subset(sources:targets:) // method 
	0xc740  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0xe9d0  func MADistribution.inverse() // method 
	0xf3e0  func MADistribution.intersect(distribution:) // method 
	0x10320  func MADistribution.projectionMatrix.getter // getter 
	0x11bc0  func MADistribution.projectionMatrix.setter // setter 
	0x11be0  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0x11c70  func MADistribution.weightedProjectionMatrix.getter // getter 
	0x12e60  func MADistribution.weightedProjectionMatrix.setter // setter 
	0x12e80  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0x12f10  func MADistribution.projectionGraph.getter // getter 
	0x13ce0  func MADistribution.projectionGraph.setter // setter 
	0x13d00  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0x13d90  func MADistribution.sourceSingletons.getter // getter 
	0x13fd0  func MADistribution.sourceSingletons.setter // setter 
	0x13ff0  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x14080  func MADistribution.targetSingletons.getter // getter 
	0x142c0  func MADistribution.targetSingletons.setter // setter 
	0x142e0  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x14370  func MADistribution.adjacencyMatrix.getter // getter 
	0x143c0  func MADistribution.adjacencyMatrix.setter // setter 
	0x143e0  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x14470  func MADistribution.adjacencyMatrix(directed:) // method 
	0x15320  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x15330  func MADistribution.degreeVector(type:) // method 
	0x16650  func MADistribution.multiDegreeVector(type:) // method 
	0x16660  func MADistribution.transitionMatrix(directed:) // method 
	0x16670  func MADistribution.sourceDegreeVector.getter // getter 
	0x169d0  func MADistribution.sourceDegreeVector.setter // setter 
	0x169f0  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x16a80  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x16bb0  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x16bd0  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x16c60  func MADistribution.targetDegreeVector.getter // getter 
	0x16ef0  func MADistribution.targetDegreeVector.setter // setter 
	0x16f10  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x16fa0  func MADistribution.targetDegreeMatrix.getter // getter 
	0x170d0  func MADistribution.targetDegreeMatrix.setter // setter 
	0x170f0  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x17180  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x17540  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x17560  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x175f0  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x17720  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x17740  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x177d0  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x17b80  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x17ba0  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x17c30  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x17d60  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x17d80  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x17e10  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x18a30  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x18a50  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x18ae0  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x18ce0  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x19470  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x19490  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x19520  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x19760  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x1a180  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x1a1a0  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x1a230  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x1a490  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x1ae40  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x1ae60  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x1aef0  func MADistribution.targetCommonality(target1:target2:) // method 
	0x1b300  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x1be20  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x1be40  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1bed0  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x1c0f0  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x1cc40  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x1cc60  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1ccf0  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x1d0f0  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x1d6f0  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
	0x2b4d0  @objc MALearningStreamResult.detectedClass.getter
	0x2b550  @objc MALearningStreamResult.confidence.getter
	0x2b6b0  @objc MALearningStreamResult.description.getter
	0x2b860  @objc MALearningStreamResult.init()
	0x2b8b0  @objc MALearningStreamResult.__ivar_destroyer

	// Swift methods
	0x2b590  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier
	let assetClassifier : MAMultinomialNaiveBayesClassifier

	// ObjC -> Swift bridged methods
	0x2c220  @objc MALearningStreamUtils.init(withClasses:momentFeatureVectors:assetFeatureVectors:)
	0x2da10  @objc MALearningStreamUtils.classifyMoments(inputFeatureVectors:)
	0x2da50  @objc MALearningStreamUtils.classifyAssets(inputFeatureVectors:)
	0x2dde0  @objc MALearningStreamUtils.init()
	0x2de70  @objc MALearningStreamUtils.__ivar_destroyer

	// Swift methods
	0x2b8d0  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x2d9f0  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x2da30  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
 }

 class KnowledgeGraphKit.MASlice : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let graph : MAGraph
	let nodes : Set<MANode>?
	var weight : Double
	var projectionPaths : MASlice
	var fuzzinessClosure : (_:_:_:)?
	var _tag : String?

	// Swift methods
	0x33fe0  func MASlice.weight.getter // getter 
	0x33ff0  func MASlice.weight.setter // setter 
	0x34000  func MASlice.weight.modify // modifyCoroutine 
	0x34070  class func MASlice.__allocating_init(graph:weight:) // init 
	0x34160  func MASlice.contentNodes() // method 
	0x34260  func MASlice.weightedContentNodes() // method 
	0x34450  func MASlice.hasWeight() // method 
	0x34470  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x348f0  func MASlice.contains(node:) // method 
	0x34aa0  func MASlice.representativeNodes() // method 
	0x35180  func MASlice.representations() // method 
	0x357d0  func MASlice.hash(into:) // method 
	0x35900  func MASlice.equals(rhs:) // method 
	0x359a0  func MASlice.tag.getter // getter 
	0x359d0  func MASlice.tag.setter // setter 
	0x359f0  func MASlice.tag.modify // modifyCoroutine 
	0x35aa0  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x35e90  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x35f50  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x35f80  func MASlice.removeProjectionPaths() // method 
	0x35fb0  func MASlice.setFuzziness(closure:) // method 
	0x35fe0  func MASlice.removeFuzziness() // method 
	0x36010  func MASlice.project(node:slice:paths:progress:) // method 
	0x36020  func MASlice.project(node:slice:paths:progress:) // method 
	0x37400  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x38ae0  func MASlice.fragmentBy(slice:) // method 
	0x3cd50  func MASlice.distributeBy(_:) // method 
	0x3d1e0  func MASlice.filter(_:) // method 
	0x3d8e0  func MASlice.hashValue.getter // getter 
 }

 class KnowledgeGraphKit.MASlices : MASlice {

	// Properties
	let slices : MASlice

	// Swift methods
 }

 class KnowledgeGraphKit.MADomainsSlice : MASlice {

	// Properties
	let domains : [UInt16]

	// Swift methods
 }

 class KnowledgeGraphKit.MAFetchSlice : MASlice {

	// Properties
	let domain : UInt16?
	let label : String?
	let properties : [String : Swift.AnyObject]?
	var $__lazy_storage_$_abstractNode : MAAbstractNode?

	// Swift methods
 }

 class KnowledgeGraphKit.MAQuerySlice : MASlice {

	// Properties
	let visualFormat : String
	let visualElements : [String : MAElement]?
	var $__lazy_storage_$_visualDefinitions : [AnyHashable : Any]?
	var $__lazy_storage_$_visualConstraints : [Any]??

	// Swift methods
	0x46200  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
 }

 enum KnowledgeGraphKit.MAFeatureDefinitionType {

	// Properties
	case category  
	case binary  
 }

 class KnowledgeGraphKit.MAFeatureDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let graph : MAGraph // +0x10 (0x8)
	let source : MASlice // +0x18 (0x8)
	let targets : MAFeatureDefinitionType // +0x20 (0x8)
	var targetsByName : MAFeatureDefinitionType // +0x28 (0x8)
	var contentNodesBySlices : [MASlice : [MANode]] // +0x30 (0x8)
	var $__lazy_storage_$_targetIndicesByName : [String : Int]? // +0x38 (0x8)
	var $__lazy_storage_$_space : Int? // +0x40 (0x9)
	var $__lazy_storage_$_keys : [String]? // +0x50 (0x8)

	// Swift methods
	0x635e0  func MAFeatureDefinition.target(for:) // method 
	0x63710  func MAFeatureDefinition.space.getter // getter 
	0x63a30  func MAFeatureDefinition.space.setter // setter 
	0x63a40  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x63da0  func MAFeatureDefinition.keys.getter // getter 
	0x63f80  func MAFeatureDefinition.keys.setter // setter 
	0x63fa0  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x64030  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x67750  func MAFeatureDefinition.stringValues(from:) // method 
	0x67cb0  func MAFeatureDefinition.nodes(from:forKey:) // method 
 }

 enum KnowledgeGraphKit.MATensorMode {

	// Properties
	case mode1  
	case mode2  
	case mode3  
 }

 class KnowledgeGraphKit.MATensor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let distributions : [MASquareMatrixRepresentation] // +0x10 (0x8)
	let entities : [MANode] // +0x18 (0x8)
	let relations : [MAEdge] // +0x20 (0x8)

	// Swift methods
	0x75db0  func MATensor.size.getter // getter 
	0x75ea0  func MATensor.subscript.getter // getter 
	0x761b0  func MATensor.subscript.getter // getter 
	0x765a0  func MATensor.subscript.getter // getter 
	0x76720  func MATensor.subscript.getter // getter 
	0x76a60  func MATensor.slice(mode:index:) // method 
	0x77790  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x78050  func MATensor.unfoldedFiber(mode:) // method 
	0x78750  func MATensor.flatten() // method 
 }

 enum KnowledgeGraphKit.MAMatrixAxes {

	// Properties
	case row  
	case column  
 }

 enum KnowledgeGraphKit.MAMatrixDistances {

	// Properties
	case cosine  
	case euclidean  
	case manhattan  
 }

 struct KnowledgeGraphKit.MAMatrix {

	// Properties
	let rows : Int // +0x0
	let columns : Int // +0x8
	var elements : [Double] // +0x10
 }

 class KnowledgeGraphKit.MASparseMatrix : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let kind : MASparseMatrixKind // +0x10 (0x1)
	let rows : UInt64 // +0x18 (0x8)
	let columns : UInt64 // +0x20 (0x8)
	var matrix : OpaquePointer // +0x28 (0x8)

	// Swift methods
 }

 enum KnowledgeGraphKit.MASparseMatrixKind {

	// Properties
	case ordinary  
	case symmetricUpperTriangle  
	case symmetricLowerTriangle  
 }

 struct KnowledgeGraphKit.MAFeatureVector {

	// Properties
	let definition : MAFeatureDefinition // +0x0
	let values : [Int] // +0x8
	var $__lazy_storage_$_stringValues : [String]? // +0x10
	var $__lazy_storage_$_keys : [String]? // +0x18
 }

 struct KnowledgeGraphKit.MACluster {

	// Properties
	var nodes : Set<MANode> // +0x0
	var descriptionNodes : Set<MANode>? // +0x8
 }

 class KnowledgeGraphKit.MANaiveBayesClassifier : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var classes : [AnyHashable]
	var data : [[AnyHashable]]
	var training : [AnyHashable : [Int : Any]]

	// Swift methods
	0xa66b0  class func MANaiveBayesClassifier.__allocating_init(classes:data:) // init 
	0xa6f90  func MANaiveBayesClassifier.train(progress:) // method 
	0xa78d0  func MANaiveBayesClassifier.classify(with:) // method 
	0xa7950  func MANaiveBayesClassifier.classify(with:limit:) // method 
 }

 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0xaf8e0  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaf920  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaf030  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0xafe00  func MAVectorRepresentation.subscript.getter // getter 
	0xafeb0  func MAVectorRepresentation.subscript.getter // getter 
	0xb01a0  func MAVectorRepresentation.diagMatrix() // method 
	0xb01c0  func MAVectorRepresentation.weighted(vector:) // method 
	0xb01e0  func MAVectorRepresentation.weighted(factor:) // method 
	0xb0200  func MAVectorRepresentation.weighted(combine:) // method 
	0xb0220  func MAVectorRepresentation.normalized() // method 
	0xb0240  func MAVectorRepresentation.normalized(by:) // method 
	0xb03f0  func MAVectorRepresentation.reversed() // method 
	0xb0410  func MAVectorRepresentation.filter(threshold:) // method 
	0xb0730  func MAVectorRepresentation.abs() // method 
	0xb0750  func MAVectorRepresentation.count.getter // getter 
	0xb07d0  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix // +0x10 (0x18)
	let nodes : [MANode] // +0x28 (0x8)

	// Swift methods
	0xaefc0  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0xb6440  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6510  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6810  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6950  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6c90  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6d10  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6eb0  func MASquareMatrixRepresentation.diagVector() // method 
	0xb6f60  func MASquareMatrixRepresentation.meanVector() // method 
	0xb7180  func MASquareMatrixRepresentation.medianVector() // method 
	0xc96a0  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0xb7220  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0xb72e0  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0xb7490  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0xb7660  func MASquareMatrixRepresentation.normalized() // method 
	0xb7820  func MASquareMatrixRepresentation.reversed() // method 
	0xb7af0  func MASquareMatrixRepresentation.abs() // method 
	0xc97b0  func MASquareMatrixRepresentation.count.getter // getter 
	0xb7cc0  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0xaf0c0  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0xbaad0  func MAMatrixRepresentation.subscript.getter // getter 
	0xbac00  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaf140  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xbe9a0  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0xbf250  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaf000  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xc13d0  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0xcb8c0  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0xcb950  func MASimilarityDistance.prepare(graph:) // method 
	0xcb960  func MASimilarityDistance.distance(source:target:) // method 
	0xcb970  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
 }

 class KnowledgeGraphKit.MAShortestPathSimilarityDistance : MASimilarityDistance { }

 class KnowledgeGraphKit.MACommonNeighborsSimilarityDistance : MASimilarityDistance { }

 class KnowledgeGraphKit.MAEuclideanSimilarityDistance : MASimilarityDistance { }

 class KnowledgeGraphKit.MACosineSimilarityDistance : MACommonNeighborsSimilarityDistance { }

 class KnowledgeGraphKit.MAProbabilitySimilarityDistance : MACommonNeighborsSimilarityDistance { }

 class KnowledgeGraphKit.MAFrequencyWeightedCommonNeighborsSimilarityDistance : MASimilarityDistance { }

 class KnowledgeGraphKit.MAPreferentialAttachmentSimilarityDistance : MASimilarityDistance { }

 class KnowledgeGraphKit.MAExponentiallyDampedPathCountsSimilarityDistance : MASimilarityDistance {

	// Properties
	var walkMatrices : [MASquareMatrixRepresentation]?

	// Swift methods
 }

 enum KnowledgeGraphKit.MAError {

	// Properties
	case cancelled  
	case notFound  
	case incompatible  
	case denied  
	case ambiguous  
	case unknown  
 }
