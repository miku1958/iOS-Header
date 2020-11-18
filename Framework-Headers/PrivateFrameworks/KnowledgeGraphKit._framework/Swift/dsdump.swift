 protocol KnowledgeGraphKit.MAClassifier // 3 requirements
 {
	// class associated type access function
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
 protocol KnowledgeGraphKit.AccelerateBufferWrapper // 6 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// class init
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

 enum __C.MatrixAxis { }

 class KnowledgeGraphKit.MASparseSquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MASparseMatrix // +0x10 (0x8)
	let nodes : [MANode] // +0x18 (0x8)

	// Swift methods
	0x1a50  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1aa0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1b40  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1dd0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1ef0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool // +0x20 (0x1)

	// Swift methods
	0x2010  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
 }

 class KnowledgeGraphKit.MAFloatVectorWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _floatVector : Vector

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa49e00043d58 (0x49e00043d58) in binary!
	0xaf40  @objc MAFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xaf4400042f68 (0x74400042f68) in binary!
	0x1d8000000c  @objc MAFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xa48700043190 (0x48700043190) in binary!
	0xb90c  @objc MAFloatVectorWrapper.(null) <stripped>

	// Swift methods
	0x2670  func MAFloatVectorWrapper.floatVector.getter // getter 
	0x2690  class func MAFloatVectorWrapper.__allocating_init(floatVector:) // init 
	0xa2d0  class func MAFloatVectorWrapper.__allocating_init(array:) // init 
 }

 class KnowledgeGraphKit.MAMutableFloatVectorWrapper : MAFloatVectorWrapper {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa30600043bc0 (0x30600043bc0) in binary!
	0xada8  @objc MAMutableFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x10cffec5d10  @objc MAMutableFloatVectorWrapper.(null) <stripped>
 }

 class KnowledgeGraphKit.MADistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let projections : [MANode : Set<MANode>]
	let weights : [MANode : Double]?
	var $__lazy_storage_$_weightsVector : MAVectorRepresentation
	var $__lazy_storage_$_sourceWeightsVector : MAVectorRepresentation
	var $__lazy_storage_$_targetWeightsVector : MAVectorRepresentation
	var $__lazy_storage_$_projectionMatrix : MAMatrixRepresentation
	var $__lazy_storage_$_weightedProjectionMatrix : MAMatrixRepresentation
	var $__lazy_storage_$_projectionGraph : MAGraph?
	var $__lazy_storage_$_sourceSingletons : Set<MANode>?
	var $__lazy_storage_$_targetSingletons : Set<MANode>?
	var $__lazy_storage_$_adjacencyMatrix : MAAdjacencyMatrixRepresentation
	var $__lazy_storage_$_sourceDegreeVector : MAVectorRepresentation
	var $__lazy_storage_$_sourceDegreeMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_targetDegreeVector : MAVectorRepresentation
	var $__lazy_storage_$_targetDegreeMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_weightedSourceDegreeVector : MAVectorRepresentation
	var $__lazy_storage_$_weightedsourceDegreeMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_weightedTargetDegreeVector : MAVectorRepresentation
	var $__lazy_storage_$_weightedTargetDegreeMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_maximumSimilarityDistance : Double?
	var $__lazy_storage_$_sourceSimilarityMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_sourceSimilarityIdentityVector : MAVectorRepresentation
	var $__lazy_storage_$_sourceCommonalityMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_targetCommonalityMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_sourceIdentityCommonalityMatrix : MASquareMatrixRepresentation
	var $__lazy_storage_$_targetIdentityCommonalityMatrix : MASquareMatrixRepresentation

	// Swift methods
	0xd4b0  class func MADistribution.__allocating_init(projections:weights:) // init 
	0xd5d0  class func MADistribution.__allocating_init(distributions:) // init 
	0xd6a0  func MADistribution.sources.getter // getter 
	0xd890  func MADistribution.targets.getter // getter 
	0xda70  func MADistribution.size.getter // getter 
	0xdb10  func MADistribution.count.getter // getter 
	0xdb40  func MADistribution.fullSize.getter // getter 
	0xddc0  func MADistribution.weight(node:) // method 
	0xe030  func MADistribution.weightsVector.getter // getter 
	0xe550  func MADistribution.weightsVector.setter // setter 
	0xe570  func MADistribution.weightsVector.modify // modifyCoroutine 
	0xe5c0  func MADistribution.sourceWeightsVector.getter // getter 
	0xe9e0  func MADistribution.sourceWeightsVector.setter // setter 
	0xea00  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0xea50  func MADistribution.targetWeightsVector.getter // getter 
	0xee60  func MADistribution.targetWeightsVector.setter // setter 
	0xee80  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0xeed0  func MADistribution.merge(distributions:) // method 
	0xef80  func MADistribution.subset(sources:) // method 
	0xf0c0  func MADistribution.subset(targets:) // method 
	0x100a0  func MADistribution.subset(sources:targets:) // method 
	0x11050  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0x11ef0  func MADistribution.inverse() // method 
	0x12a30  func MADistribution.intersect(distribution:) // method 
	0x137a0  func MADistribution.projectionMatrix.getter // getter 
	0x14630  func MADistribution.projectionMatrix.setter // setter 
	0x14650  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0x146a0  func MADistribution.weightedProjectionMatrix.getter // getter 
	0x15720  func MADistribution.weightedProjectionMatrix.setter // setter 
	0x15740  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0x15790  func MADistribution.projectionGraph.getter // getter 
	0x161f0  func MADistribution.projectionGraph.setter // setter 
	0x16210  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0x16260  func MADistribution.sourceSingletons.getter // getter 
	0x162b0  func MADistribution.sourceSingletons.setter // setter 
	0x162d0  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x16320  func MADistribution.targetSingletons.getter // getter 
	0x16500  func MADistribution.targetSingletons.setter // setter 
	0x16520  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x16570  func MADistribution.adjacencyMatrix.getter // getter 
	0x165c0  func MADistribution.adjacencyMatrix.setter // setter 
	0x165e0  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x16630  func MADistribution.adjacencyMatrix(directed:) // method 
	0x171c0  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x171d0  func MADistribution.degreeVector(type:) // method 
	0x18300  func MADistribution.multiDegreeVector(type:) // method 
	0x18310  func MADistribution.transitionMatrix(directed:) // method 
	0x18320  func MADistribution.sourceDegreeVector.getter // getter 
	0x18700  func MADistribution.sourceDegreeVector.setter // setter 
	0x18720  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x18770  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x18830  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x18850  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x188a0  func MADistribution.targetDegreeVector.getter // getter 
	0x18a80  func MADistribution.targetDegreeVector.setter // setter 
	0x18aa0  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x18af0  func MADistribution.targetDegreeMatrix.getter // getter 
	0x18bc0  func MADistribution.targetDegreeMatrix.setter // setter 
	0x18be0  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x18c30  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x18f30  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x18f50  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x18fa0  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x19070  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x19090  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x190e0  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x193d0  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x193f0  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x19440  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x19510  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x19530  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x19580  func MADistribution.maximumSimilarityDistance.getter // getter 
	0x19630  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x19ee0  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x19f00  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x19f50  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x1a1f0  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x1a6e0  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x1a700  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x1a750  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x1a960  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x1b140  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x1b160  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x1b1b0  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x1b510  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x1bd00  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x1bd20  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x1bd70  func MADistribution.targetCommonality(target1:target2:) // method 
	0x1c0c0  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x1c900  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x1c920  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1c970  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x1ccc0  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x1d530  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x1d550  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1d5a0  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x1d8e0  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x1df10  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xac6c00042528 (0x46c00042528) in binary!
	0xac68  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xac5400043688 (0x45400043688) in binary!
	0xac48  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xac4c00042c70 (0x44c00042c70) in binary!
	0x48000000c  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xb5d400044b40 (0x5d400044b40) in binary!
	0xb5e8  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xa53000042c30 (0x53000042c30) in binary!
	0xa524  @objc MALearningStreamResult.(null) <stripped>

	// Swift methods
	0x2c4a0  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier
	let assetClassifier : MAMultinomialNaiveBayesClassifier

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xad7400042580 (0x57400042580) in binary!
	0xa1fa  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xa1ee00042578 (0x1ee00042578) in binary!
	0xac90  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac9400042cb8 (0x49400042cb8) in binary!
	0x58000000c  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac6c00042528 (0x46c00042528) in binary!
	0xac68  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac5400043688 (0x45400043688) in binary!
	0xac48  @objc MALearningStreamUtils.(null) <stripped>

	// Swift methods
	0x2c7b0  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x2e1e0  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x2e220  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
 }

 class KnowledgeGraphKit.MASlice : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let graph : MABaseGraph // +0x10 (0x8)
	let nodes : Set<MANode>? // +0x18 (0x8)
	var weight : Double // +0x20 (0x8)
	var projectionPaths : MASlice // +0x28 (0x8)
	var fuzzinessClosure : (_:_:_:)? // +0x30 (0x10)
	var _tag : String? // +0x40 (0x10)

	// Swift methods
	0x343b0  func MASlice.weight.getter // getter 
	0x343c0  func MASlice.weight.setter // setter 
	0x343d0  func MASlice.weight.modify // modifyCoroutine 
	0x34440  class func MASlice.__allocating_init(graph:weight:) // init 
	0x34510  func MASlice.contentNodes() // method 
	0x345d0  func MASlice.weightedContentNodes() // method 
	0x34660  func MASlice.hasWeight() // method 
	0x34680  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x34930  func MASlice.contains(node:) // method 
	0x34980  func MASlice.representativeNodes() // method 
	0x34e50  func MASlice.representations() // method 
	0x352f0  func MASlice.hash(into:) // method 
	0x353e0  func MASlice.equals(rhs:) // method 
	0x35450  func MASlice.tag.getter // getter 
	0x35480  func MASlice.tag.setter // setter 
	0x354a0  func MASlice.tag.modify // modifyCoroutine 
	0x35500  func MASlice.projectionPaths(targetSlice:sourceName:targetName:) // method 
	0x35670  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x357e0  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x358a0  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x35970  func MASlice.removeProjectionPaths() // method 
	0x359a0  func MASlice.setFuzziness(closure:) // method 
	0x359d0  func MASlice.removeFuzziness() // method 
	0x35a00  func MASlice.project(node:slice:paths:progress:) // method 
	0x35a10  func MASlice.project(node:slice:paths:progress:) // method 
	0x36790  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x37730  func MASlice.fragmentBy(slice:) // method 
	0x39bc0  func MASlice.distributeBy(_:) // method 
	0x39e70  func MASlice.filter(_:) // method 
	0x3a370  func MASlice.hashValue.getter // getter 
 }

 class KnowledgeGraphKit.MASlices : MASlice {

	// Properties
	let slices : MASlice // +0x50 (0x8)

	// Swift methods
 }

 class KnowledgeGraphKit.MADomainsSlice : MASlice {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domains :  empty-list 

	// Swift methods
 }

 class KnowledgeGraphKit.MAFetchSlice : MASlice {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : 'ë // +0x50 (0x3)
	let label : String? // +0x58 (0x10)
	let properties : [String : Swift.AnyObject]? // +0x68 (0x8)
	var $__lazy_storage_$_abstractNode : MAAbstractNode? // +0x70 (0x8)

	// Swift methods
	0x3f9c0  func MAFetchSlice.abstractNode.getter // getter 
 }

 class KnowledgeGraphKit.MAQuerySlice : MASlice {

	// Properties
	let visualFormat : String
	let visualElements : [String : MAElement]?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_visualDefinitions :  empty-list 
	var $__lazy_storage_$_visualConstraints : [Any]??

	// Swift methods
	0x400e0  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
	0x412d0  func MAQuerySlice.visualDefinitions.getter // getter 
	0x41320  func MAQuerySlice.visualConstraints.getter // getter 
 }

 enum KnowledgeGraphKit.MAFeatureDefinitionType {

	// Properties
	case category  
	case binary  
 }

 class KnowledgeGraphKit.MAFeatureDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let graph : MABaseGraph
	let source : MASlice
	let targets : MASlice
	var targetsByName : MASlice
	var contentNodesBySlices : MASlice
	var $__lazy_storage_$_targetIndicesByName : [String : Int]?
	var $__lazy_storage_$_space : Int?
	var $__lazy_storage_$_keys : [String]?

	// Swift methods
	0x4c400  func MAFeatureDefinition.target(for:) // method 
	0x4c560  func MAFeatureDefinition.contentNodes(for:) // method 
	0x4cb10  func MAFeatureDefinition.targetIndicesByName.getter // getter 
	0x4cb60  func MAFeatureDefinition.space.getter // getter 
	0x4cdf0  func MAFeatureDefinition.space.setter // setter 
	0x4ce00  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x4ce50  func MAFeatureDefinition.keys.getter // getter 
	0x4d040  func MAFeatureDefinition.keys.setter // setter 
	0x4d060  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x4d0b0  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x50bc0  func MAFeatureDefinition.stringValues(from:) // method 
	0x50d60  func MAFeatureDefinition.nodes(from:forKey:) // method 
 }

 enum KnowledgeGraphKit.GraphStoreError {

	// Properties
	case unknownError  
 }

 struct KnowledgeGraphKit.Vector {

	// Properties
	var elements : [A]
 }

 class KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _floatMatrix : Matrix

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa13e00044b10 (0x13e00044b10) in binary!
	0xabe0  @objc MAFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0xabe400042c08 (0x3e400042c08) in binary!
	0x178000000c  @objc MAFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0xa12700042e30 (0x12700042e30) in binary!
	0xb5ac  @objc MAFloatMatrixWrapper.(null) <stripped>

	// Swift methods
	0x57d20  func MAFloatMatrixWrapper.floatMatrix.getter // getter 
	0x57d60  class func MAFloatMatrixWrapper.__allocating_init(floatMatrix:) // init 
	0x57e30  class func MAFloatMatrixWrapper.__allocating_init(rows:) // init 
 }

 class KnowledgeGraphKit.MAMutableFloatMatrixWrapper : MAFloatMatrixWrapper {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9fee000449c0 (0x7ee000449c0) in binary!
	0xaa90  @objc MAMutableFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x14cfff1b8e8  @objc MAMutableFloatMatrixWrapper.(null) <stripped>
 }

 enum KnowledgeGraphKit.MATensorMode {

	// Properties
	case mode1  
	case mode2  
	case mode3  
 }

 class KnowledgeGraphKit.MATensor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let distributions : MASquareMatrixRepresentation // +0x10 (0x8)
	let entities : [MANode] // +0x18 (0x8)
	let relations : [MAEdge] // +0x20 (0x8)

	// Swift methods
	0x5c390  func MATensor.size.getter // getter 
	0x5c440  func MATensor.subscript.getter // getter 
	0x5c6a0  func MATensor.subscript.getter // getter 
	0x5c7b0  func MATensor.subscript.getter // getter 
	0x5c890  func MATensor.subscript.getter // getter 
	0x5c930  func MATensor.slice(mode:index:) // method 
	0x5d320  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x5dba0  func MATensor.unfoldedFiber(mode:) // method 
	0x5e000  func MATensor.flatten() // method 
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
	let kind : MASparseMatrixKind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rows : ­å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let columns : ­å
WARNING: couldn't find address 0x0 (0x0) in binary!
	var matrix : ‡ä

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

 class KnowledgeGraphKit.MANaiveBayesClassifier {
 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier {
 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier {
 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0x8a430  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8a860  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8a230  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0x8acb0  func MAVectorRepresentation.subscript.getter // getter 
	0x8ad30  func MAVectorRepresentation.subscript.getter // getter 
	0x8ada0  func MAVectorRepresentation.diagMatrix() // method 
	0x8adc0  func MAVectorRepresentation.weighted(vector:) // method 
	0x8ade0  func MAVectorRepresentation.weighted(factor:) // method 
	0x8ae00  func MAVectorRepresentation.weighted(combine:) // method 
	0x8ae20  func MAVectorRepresentation.normalized() // method 
	0x8ae40  func MAVectorRepresentation.normalized(by:) // method 
	0x8af60  func MAVectorRepresentation.reversed() // method 
	0x8af80  func MAVectorRepresentation.filter(threshold:) // method 
	0x8b220  func MAVectorRepresentation.abs() // method 
	0x8b240  func MAVectorRepresentation.count.getter // getter 
	0x8b2a0  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0x9c840  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x8eef0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8ef90  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f010  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f110  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f1e0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f310  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f440  func MASquareMatrixRepresentation.diagVector() // method 
	0x8f4e0  func MASquareMatrixRepresentation.meanVector() // method 
	0x8f680  func MASquareMatrixRepresentation.medianVector() // method 
	0x9c860  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0x8f710  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0x8f7b0  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0x8f8e0  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0x8fa20  func MASquareMatrixRepresentation.normalized() // method 
	0x8faf0  func MASquareMatrixRepresentation.reversed() // method 
	0x8fc60  func MASquareMatrixRepresentation.abs() // method 
	0x9c650  func MASquareMatrixRepresentation.count.getter // getter 
	0x8fd90  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0x8a280  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0x920f0  func MAMatrixRepresentation.subscript.getter // getter 
	0x921d0  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x9c890  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x95650  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0x95f00  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x8a1d0  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x97c40  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0x9dd40  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0x9dd90  func MASimilarityDistance.prepare(graph:) // method 
	0x9dda0  func MASimilarityDistance.distance(source:target:) // method 
	0x9ddb0  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
	var walkMatrices : MASquareMatrixRepresentation

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

 struct KnowledgeGraphKit.Matrix {

	// Properties
	var elements : [A]
	var shape : Shape
 }

 struct KnowledgeGraphKit.Shape {

	// Properties
	var rows : Int
	var columns : Int
 }

 struct KnowledgeGraphKit.Slice {

	// Properties
	var pointer : UnsafePointer<A>
	var stride : Int
	var count : Int
 }

 struct KnowledgeGraphKit.MutableSlice {

	// Properties
	var pointer : UnsafeMutablePointer<A>
	var stride : Int
	var count : Int
 }
