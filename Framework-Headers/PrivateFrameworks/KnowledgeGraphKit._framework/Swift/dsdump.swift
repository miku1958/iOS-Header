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
	0x1bf0  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1c80  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1d40  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1fc0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x2100  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x21e0  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
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
	0x6f40  class func MADistribution.__allocating_init(projections:weights:) // init 
	0x70b0  class func MADistribution.__allocating_init(distributions:) // init 
	0x71a0  func MADistribution.sources.getter // getter 
	0x73e0  func MADistribution.targets.getter // getter 
	0x7790  func MADistribution.size.getter // getter 
	0x7a20  func MADistribution.count.getter // getter 
	0x7a50  func MADistribution.fullSize.getter // getter 
	0x7b50  func MADistribution.weight(node:) // method 
	0x8350  func MADistribution.weightsVector.getter // getter 
	0x8d50  func MADistribution.weightsVector.setter // setter 
	0x8d70  func MADistribution.weightsVector.modify // modifyCoroutine 
	0x8e00  func MADistribution.sourceWeightsVector.getter // getter 
	0x94b0  func MADistribution.sourceWeightsVector.setter // setter 
	0x94d0  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0x9560  func MADistribution.targetWeightsVector.getter // getter 
	0x9dc0  func MADistribution.targetWeightsVector.setter // setter 
	0x9de0  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0x9e70  func MADistribution.merge(distributions:) // method 
	0x9f80  func MADistribution.subset(sources:) // method 
	0xa0f0  func MADistribution.subset(targets:) // method 
	0xb1c0  func MADistribution.subset(sources:targets:) // method 
	0xc2f0  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0xe580  func MADistribution.inverse() // method 
	0xef90  func MADistribution.intersect(distribution:) // method 
	0xfed0  func MADistribution.projectionMatrix.getter // getter 
	0x11770  func MADistribution.projectionMatrix.setter // setter 
	0x11790  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0x11820  func MADistribution.weightedProjectionMatrix.getter // getter 
	0x12a10  func MADistribution.weightedProjectionMatrix.setter // setter 
	0x12a30  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0x12ac0  func MADistribution.projectionGraph.getter // getter 
	0x13890  func MADistribution.projectionGraph.setter // setter 
	0x138b0  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0x13940  func MADistribution.sourceSingletons.getter // getter 
	0x13b80  func MADistribution.sourceSingletons.setter // setter 
	0x13ba0  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x13c30  func MADistribution.targetSingletons.getter // getter 
	0x13e70  func MADistribution.targetSingletons.setter // setter 
	0x13e90  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x13f20  func MADistribution.adjacencyMatrix.getter // getter 
	0x13f70  func MADistribution.adjacencyMatrix.setter // setter 
	0x13f90  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x14020  func MADistribution.adjacencyMatrix(directed:) // method 
	0x14ed0  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x14ee0  func MADistribution.degreeVector(type:) // method 
	0x16200  func MADistribution.multiDegreeVector(type:) // method 
	0x16210  func MADistribution.transitionMatrix(directed:) // method 
	0x16220  func MADistribution.sourceDegreeVector.getter // getter 
	0x16580  func MADistribution.sourceDegreeVector.setter // setter 
	0x165a0  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x16630  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x16760  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x16780  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x16810  func MADistribution.targetDegreeVector.getter // getter 
	0x16aa0  func MADistribution.targetDegreeVector.setter // setter 
	0x16ac0  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x16b50  func MADistribution.targetDegreeMatrix.getter // getter 
	0x16c80  func MADistribution.targetDegreeMatrix.setter // setter 
	0x16ca0  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x16d30  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x170f0  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x17110  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x171a0  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x172d0  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x172f0  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x17380  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x17730  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x17750  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x177e0  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x17910  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x17930  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x179c0  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x185e0  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x18600  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x18690  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x18890  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x19020  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x19040  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x190d0  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x19310  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x19d30  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x19d50  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x19de0  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x1a040  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x1a9f0  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x1aa10  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x1aaa0  func MADistribution.targetCommonality(target1:target2:) // method 
	0x1aeb0  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x1b9d0  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x1b9f0  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1ba80  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x1bca0  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x1c7f0  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x1c810  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1c8a0  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x1cca0  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x1d2a0  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
	0x2b080  @objc MALearningStreamResult.detectedClass.getter
	0x2b100  @objc MALearningStreamResult.confidence.getter
	0x2b260  @objc MALearningStreamResult.description.getter
	0x2b410  @objc MALearningStreamResult.init()
	0x2b460  @objc MALearningStreamResult.__ivar_destroyer

	// Swift methods
	0x2b140  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier
	let assetClassifier : MAMultinomialNaiveBayesClassifier

	// ObjC -> Swift bridged methods
	0x2bdd0  @objc MALearningStreamUtils.init(withClasses:momentFeatureVectors:assetFeatureVectors:)
	0x2d5c0  @objc MALearningStreamUtils.classifyMoments(inputFeatureVectors:)
	0x2d600  @objc MALearningStreamUtils.classifyAssets(inputFeatureVectors:)
	0x2d990  @objc MALearningStreamUtils.init()
	0x2da20  @objc MALearningStreamUtils.__ivar_destroyer

	// Swift methods
	0x2b480  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x2d5a0  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x2d5e0  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
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
	0x33b90  func MASlice.weight.getter // getter 
	0x33ba0  func MASlice.weight.setter // setter 
	0x33bb0  func MASlice.weight.modify // modifyCoroutine 
	0x33c20  class func MASlice.__allocating_init(graph:weight:) // init 
	0x33d10  func MASlice.contentNodes() // method 
	0x33e10  func MASlice.weightedContentNodes() // method 
	0x34000  func MASlice.hasWeight() // method 
	0x34020  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x344a0  func MASlice.contains(node:) // method 
	0x34650  func MASlice.representativeNodes() // method 
	0x34d30  func MASlice.representations() // method 
	0x35380  func MASlice.hash(into:) // method 
	0x354b0  func MASlice.equals(rhs:) // method 
	0x35550  func MASlice.tag.getter // getter 
	0x35580  func MASlice.tag.setter // setter 
	0x355a0  func MASlice.tag.modify // modifyCoroutine 
	0x35650  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x35a40  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x35b00  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x35b30  func MASlice.removeProjectionPaths() // method 
	0x35b60  func MASlice.setFuzziness(closure:) // method 
	0x35b90  func MASlice.removeFuzziness() // method 
	0x35bc0  func MASlice.project(node:slice:paths:progress:) // method 
	0x35bd0  func MASlice.project(node:slice:paths:progress:) // method 
	0x36fb0  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x38690  func MASlice.fragmentBy(slice:) // method 
	0x3c900  func MASlice.distributeBy(_:) // method 
	0x3cd90  func MASlice.filter(_:) // method 
	0x3d490  func MASlice.hashValue.getter // getter 
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
	0x45db0  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
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
	0x63190  func MAFeatureDefinition.target(for:) // method 
	0x632c0  func MAFeatureDefinition.space.getter // getter 
	0x635e0  func MAFeatureDefinition.space.setter // setter 
	0x635f0  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x63950  func MAFeatureDefinition.keys.getter // getter 
	0x63b30  func MAFeatureDefinition.keys.setter // setter 
	0x63b50  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x63be0  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x67300  func MAFeatureDefinition.stringValues(from:) // method 
	0x67860  func MAFeatureDefinition.nodes(from:forKey:) // method 
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
	0x75960  func MATensor.size.getter // getter 
	0x75a50  func MATensor.subscript.getter // getter 
	0x75d60  func MATensor.subscript.getter // getter 
	0x76150  func MATensor.subscript.getter // getter 
	0x762d0  func MATensor.subscript.getter // getter 
	0x76610  func MATensor.slice(mode:index:) // method 
	0x77340  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x77c00  func MATensor.unfoldedFiber(mode:) // method 
	0x78300  func MATensor.flatten() // method 
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
	0xa6260  class func MANaiveBayesClassifier.__allocating_init(classes:data:) // init 
	0xa6b40  func MANaiveBayesClassifier.train(progress:) // method 
	0xa7480  func MANaiveBayesClassifier.classify(with:) // method 
	0xa7500  func MANaiveBayesClassifier.classify(with:limit:) // method 
 }

 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0xaf490  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaf4d0  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0xaebe0  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0xaf9b0  func MAVectorRepresentation.subscript.getter // getter 
	0xafa60  func MAVectorRepresentation.subscript.getter // getter 
	0xafd50  func MAVectorRepresentation.diagMatrix() // method 
	0xafd70  func MAVectorRepresentation.weighted(vector:) // method 
	0xafd90  func MAVectorRepresentation.weighted(factor:) // method 
	0xafdb0  func MAVectorRepresentation.weighted(combine:) // method 
	0xafdd0  func MAVectorRepresentation.normalized() // method 
	0xafdf0  func MAVectorRepresentation.normalized(by:) // method 
	0xaffa0  func MAVectorRepresentation.reversed() // method 
	0xaffc0  func MAVectorRepresentation.filter(threshold:) // method 
	0xb02e0  func MAVectorRepresentation.abs() // method 
	0xb0300  func MAVectorRepresentation.count.getter // getter 
	0xb0380  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix // +0x10 (0x18)
	let nodes : [MANode] // +0x28 (0x8)

	// Swift methods
	0xaeb70  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0xb5ff0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb60c0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb63c0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6500  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6840  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb68c0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0xb6a60  func MASquareMatrixRepresentation.diagVector() // method 
	0xb6b10  func MASquareMatrixRepresentation.meanVector() // method 
	0xb6d30  func MASquareMatrixRepresentation.medianVector() // method 
	0xc9250  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0xb6dd0  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0xb6e90  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0xb7040  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0xb7210  func MASquareMatrixRepresentation.normalized() // method 
	0xb73d0  func MASquareMatrixRepresentation.reversed() // method 
	0xb76a0  func MASquareMatrixRepresentation.abs() // method 
	0xc9360  func MASquareMatrixRepresentation.count.getter // getter 
	0xb7870  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0xaec70  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0xba680  func MAMatrixRepresentation.subscript.getter // getter 
	0xba7b0  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaecf0  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xbe550  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0xbee00  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xaebb0  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0xc0f80  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0xcb470  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0xcb500  func MASimilarityDistance.prepare(graph:) // method 
	0xcb510  func MASimilarityDistance.distance(source:target:) // method 
	0xcb520  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
