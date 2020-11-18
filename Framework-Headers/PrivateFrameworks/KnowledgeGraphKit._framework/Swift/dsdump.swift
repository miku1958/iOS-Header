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
	0x1e80  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1f10  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1fd0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2250  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2390  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x2470  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
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
	0x71d0  class func MADistribution.__allocating_init(projections:weights:) // init 
	0x7340  class func MADistribution.__allocating_init(distributions:) // init 
	0x7430  func MADistribution.sources.getter // getter 
	0x7670  func MADistribution.targets.getter // getter 
	0x7a20  func MADistribution.size.getter // getter 
	0x7cb0  func MADistribution.count.getter // getter 
	0x7ce0  func MADistribution.fullSize.getter // getter 
	0x7de0  func MADistribution.weight(node:) // method 
	0x85e0  func MADistribution.weightsVector.getter // getter 
	0x8fe0  func MADistribution.weightsVector.setter // setter 
	0x9000  func MADistribution.weightsVector.modify // modifyCoroutine 
	0x9090  func MADistribution.sourceWeightsVector.getter // getter 
	0x9740  func MADistribution.sourceWeightsVector.setter // setter 
	0x9760  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0x97f0  func MADistribution.targetWeightsVector.getter // getter 
	0xa050  func MADistribution.targetWeightsVector.setter // setter 
	0xa070  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0xa100  func MADistribution.merge(distributions:) // method 
	0xa210  func MADistribution.subset(sources:) // method 
	0xa380  func MADistribution.subset(targets:) // method 
	0xb450  func MADistribution.subset(sources:targets:) // method 
	0xc580  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0xe810  func MADistribution.inverse() // method 
	0xf220  func MADistribution.intersect(distribution:) // method 
	0x10160  func MADistribution.projectionMatrix.getter // getter 
	0x11a00  func MADistribution.projectionMatrix.setter // setter 
	0x11a20  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0x11ab0  func MADistribution.weightedProjectionMatrix.getter // getter 
	0x12ca0  func MADistribution.weightedProjectionMatrix.setter // setter 
	0x12cc0  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0x12d50  func MADistribution.projectionGraph.getter // getter 
	0x13b20  func MADistribution.projectionGraph.setter // setter 
	0x13b40  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0x13bd0  func MADistribution.sourceSingletons.getter // getter 
	0x13e10  func MADistribution.sourceSingletons.setter // setter 
	0x13e30  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x13ec0  func MADistribution.targetSingletons.getter // getter 
	0x14100  func MADistribution.targetSingletons.setter // setter 
	0x14120  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x141b0  func MADistribution.adjacencyMatrix.getter // getter 
	0x14200  func MADistribution.adjacencyMatrix.setter // setter 
	0x14220  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x142b0  func MADistribution.adjacencyMatrix(directed:) // method 
	0x15160  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x15170  func MADistribution.degreeVector(type:) // method 
	0x16490  func MADistribution.multiDegreeVector(type:) // method 
	0x164a0  func MADistribution.transitionMatrix(directed:) // method 
	0x164b0  func MADistribution.sourceDegreeVector.getter // getter 
	0x16810  func MADistribution.sourceDegreeVector.setter // setter 
	0x16830  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x168c0  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x169f0  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x16a10  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x16aa0  func MADistribution.targetDegreeVector.getter // getter 
	0x16d30  func MADistribution.targetDegreeVector.setter // setter 
	0x16d50  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x16de0  func MADistribution.targetDegreeMatrix.getter // getter 
	0x16f10  func MADistribution.targetDegreeMatrix.setter // setter 
	0x16f30  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x16fc0  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x17380  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x173a0  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x17430  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x17560  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x17580  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x17610  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x179c0  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x179e0  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x17a70  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x17ba0  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x17bc0  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x17c50  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x18870  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x18890  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x18920  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x18b20  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x192b0  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x192d0  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x19360  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x195a0  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x19fc0  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x19fe0  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x1a070  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x1a2d0  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x1ac80  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x1aca0  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x1ad30  func MADistribution.targetCommonality(target1:target2:) // method 
	0x1b140  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x1bc60  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x1bc80  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1bd10  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x1bf30  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x1ca80  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x1caa0  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1cb30  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x1cf30  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x1d530  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
	0x2b510  @objc MALearningStreamResult.detectedClass.getter
	0x2b590  @objc MALearningStreamResult.confidence.getter
	0x2b6f0  @objc MALearningStreamResult.description.getter
	0x2b8a0  @objc MALearningStreamResult.init()
	0x2b8f0  @objc MALearningStreamResult.__ivar_destroyer

	// Swift methods
	0x2b5d0  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier
	let assetClassifier : MAMultinomialNaiveBayesClassifier

	// ObjC -> Swift bridged methods
	0x2c260  @objc MALearningStreamUtils.init(withClasses:momentFeatureVectors:assetFeatureVectors:)
	0x2da50  @objc MALearningStreamUtils.classifyMoments(inputFeatureVectors:)
	0x2da90  @objc MALearningStreamUtils.classifyAssets(inputFeatureVectors:)
	0x2de20  @objc MALearningStreamUtils.init()
	0x2deb0  @objc MALearningStreamUtils.__ivar_destroyer

	// Swift methods
	0x2b910  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x2da30  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x2da70  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
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
	0x34020  func MASlice.weight.getter // getter 
	0x34030  func MASlice.weight.setter // setter 
	0x34040  func MASlice.weight.modify // modifyCoroutine 
	0x340b0  class func MASlice.__allocating_init(graph:weight:) // init 
	0x341a0  func MASlice.contentNodes() // method 
	0x342a0  func MASlice.weightedContentNodes() // method 
	0x34490  func MASlice.hasWeight() // method 
	0x344b0  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x34930  func MASlice.contains(node:) // method 
	0x34ae0  func MASlice.representativeNodes() // method 
	0x351c0  func MASlice.representations() // method 
	0x35810  func MASlice.hash(into:) // method 
	0x35940  func MASlice.equals(rhs:) // method 
	0x359e0  func MASlice.tag.getter // getter 
	0x35a10  func MASlice.tag.setter // setter 
	0x35a30  func MASlice.tag.modify // modifyCoroutine 
	0x35ae0  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x35ed0  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x35f90  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x35fc0  func MASlice.removeProjectionPaths() // method 
	0x35ff0  func MASlice.setFuzziness(closure:) // method 
	0x36020  func MASlice.removeFuzziness() // method 
	0x36050  func MASlice.project(node:slice:paths:progress:) // method 
	0x36060  func MASlice.project(node:slice:paths:progress:) // method 
	0x37440  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x38b20  func MASlice.fragmentBy(slice:) // method 
	0x3cd90  func MASlice.distributeBy(_:) // method 
	0x3d220  func MASlice.filter(_:) // method 
	0x3d920  func MASlice.hashValue.getter // getter 
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
	0x46240  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
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
	0x63610  func MAFeatureDefinition.target(for:) // method 
	0x63740  func MAFeatureDefinition.space.getter // getter 
	0x63a60  func MAFeatureDefinition.space.setter // setter 
	0x63a70  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x63dd0  func MAFeatureDefinition.keys.getter // getter 
	0x63fb0  func MAFeatureDefinition.keys.setter // setter 
	0x63fd0  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x64060  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x67780  func MAFeatureDefinition.stringValues(from:) // method 
	0x67ce0  func MAFeatureDefinition.nodes(from:forKey:) // method 
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
	0x75de0  func MATensor.size.getter // getter 
	0x75ed0  func MATensor.subscript.getter // getter 
	0x761e0  func MATensor.subscript.getter // getter 
	0x765d0  func MATensor.subscript.getter // getter 
	0x76750  func MATensor.subscript.getter // getter 
	0x76a90  func MATensor.slice(mode:index:) // method 
	0x777c0  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x78080  func MATensor.unfoldedFiber(mode:) // method 
	0x78780  func MATensor.flatten() // method 
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
	0xa66e0  class func MANaiveBayesClassifier.__allocating_init(classes:data:) // init 
	0xa6fc0  func MANaiveBayesClassifier.train(progress:) // method 
	0xa7900  func MANaiveBayesClassifier.classify(with:) // method 
	0xa7980  func MANaiveBayesClassifier.classify(with:limit:) // method 
 }

 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0xaf910  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaf950  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaf060  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0xafe30  func MAVectorRepresentation.subscript.getter // getter 
	0xafee0  func MAVectorRepresentation.subscript.getter // getter 
	0xb01d0  func MAVectorRepresentation.diagMatrix() // method 
	0xb01f0  func MAVectorRepresentation.weighted(vector:) // method 
	0xb0210  func MAVectorRepresentation.weighted(factor:) // method 
	0xb0230  func MAVectorRepresentation.weighted(combine:) // method 
	0xb0250  func MAVectorRepresentation.normalized() // method 
	0xb0270  func MAVectorRepresentation.normalized(by:) // method 
	0xb0420  func MAVectorRepresentation.reversed() // method 
	0xb0440  func MAVectorRepresentation.filter(threshold:) // method 
	0xb0760  func MAVectorRepresentation.abs() // method 
	0xb0780  func MAVectorRepresentation.count.getter // getter 
	0xb0800  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix // +0x10 (0x18)
	let nodes : [MANode] // +0x28 (0x8)

	// Swift methods
	0xaeff0  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0xb6470  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6540  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6840  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6980  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6cc0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6d40  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6ee0  func MASquareMatrixRepresentation.diagVector() // method 
	0xb6f90  func MASquareMatrixRepresentation.meanVector() // method 
	0xb71b0  func MASquareMatrixRepresentation.medianVector() // method 
	0xc96b0  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0xb7250  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0xb7310  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0xb74c0  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0xb7690  func MASquareMatrixRepresentation.normalized() // method 
	0xb7850  func MASquareMatrixRepresentation.reversed() // method 
	0xb7b20  func MASquareMatrixRepresentation.abs() // method 
	0xc97c0  func MASquareMatrixRepresentation.count.getter // getter 
	0xb7cf0  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0xaf0f0  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0xbab00  func MAMatrixRepresentation.subscript.getter // getter 
	0xbac30  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaf170  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xbe9d0  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0xbf280  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaf030  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xc1400  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0xcb8d0  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0xcb960  func MASimilarityDistance.prepare(graph:) // method 
	0xcb970  func MASimilarityDistance.distance(source:target:) // method 
	0xcb980  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
