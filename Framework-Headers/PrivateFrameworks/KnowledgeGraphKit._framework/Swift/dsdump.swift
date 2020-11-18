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
	0x1d30  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1d80  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1e20  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x20b0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x21d0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool // +0x20 (0x1)

	// Swift methods
	0x22f0  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
 }

 class KnowledgeGraphKit.MAFloatVectorWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _floatVector : Vector

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa49e00042a18 (0x49e00042a18) in binary!
	0xaf40  @objc MAFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xaf4400041c28 (0x74400041c28) in binary!
	0x1d8000000c  @objc MAFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xa48700041e50 (0x48700041e50) in binary!
	0xb90c  @objc MAFloatVectorWrapper.(null) <stripped>

	// Swift methods
	0x2950  func MAFloatVectorWrapper.floatVector.getter // getter 
	0x2970  class func MAFloatVectorWrapper.__allocating_init(floatVector:) // init 
	0xa5d0  class func MAFloatVectorWrapper.__allocating_init(array:) // init 
 }

 class KnowledgeGraphKit.MAMutableFloatVectorWrapper : MAFloatVectorWrapper {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa30600042880 (0x30600042880) in binary!
	0xada8  @objc MAMutableFloatVectorWrapper.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x5ccffec5cb0  @objc MAMutableFloatVectorWrapper.(null) <stripped>
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
	0xd7b0  class func MADistribution.__allocating_init(projections:weights:) // init 
	0xd8d0  class func MADistribution.__allocating_init(distributions:) // init 
	0xd9a0  func MADistribution.sources.getter // getter 
	0xdb90  func MADistribution.targets.getter // getter 
	0xdd70  func MADistribution.size.getter // getter 
	0xde10  func MADistribution.count.getter // getter 
	0xde40  func MADistribution.fullSize.getter // getter 
	0xe0c0  func MADistribution.weight(node:) // method 
	0xe330  func MADistribution.weightsVector.getter // getter 
	0xe850  func MADistribution.weightsVector.setter // setter 
	0xe870  func MADistribution.weightsVector.modify // modifyCoroutine 
	0xe8c0  func MADistribution.sourceWeightsVector.getter // getter 
	0xece0  func MADistribution.sourceWeightsVector.setter // setter 
	0xed00  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0xed50  func MADistribution.targetWeightsVector.getter // getter 
	0xf160  func MADistribution.targetWeightsVector.setter // setter 
	0xf180  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0xf1d0  func MADistribution.merge(distributions:) // method 
	0xf280  func MADistribution.subset(sources:) // method 
	0xf3c0  func MADistribution.subset(targets:) // method 
	0x103a0  func MADistribution.subset(sources:targets:) // method 
	0x11350  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0x121f0  func MADistribution.inverse() // method 
	0x12d30  func MADistribution.intersect(distribution:) // method 
	0x13aa0  func MADistribution.projectionMatrix.getter // getter 
	0x14930  func MADistribution.projectionMatrix.setter // setter 
	0x14950  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0x149a0  func MADistribution.weightedProjectionMatrix.getter // getter 
	0x15a20  func MADistribution.weightedProjectionMatrix.setter // setter 
	0x15a40  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0x15a90  func MADistribution.projectionGraph.getter // getter 
	0x164f0  func MADistribution.projectionGraph.setter // setter 
	0x16510  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0x16560  func MADistribution.sourceSingletons.getter // getter 
	0x165b0  func MADistribution.sourceSingletons.setter // setter 
	0x165d0  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x16620  func MADistribution.targetSingletons.getter // getter 
	0x16800  func MADistribution.targetSingletons.setter // setter 
	0x16820  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x16870  func MADistribution.adjacencyMatrix.getter // getter 
	0x168c0  func MADistribution.adjacencyMatrix.setter // setter 
	0x168e0  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x16930  func MADistribution.adjacencyMatrix(directed:) // method 
	0x174c0  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x174d0  func MADistribution.degreeVector(type:) // method 
	0x18600  func MADistribution.multiDegreeVector(type:) // method 
	0x18610  func MADistribution.transitionMatrix(directed:) // method 
	0x18620  func MADistribution.sourceDegreeVector.getter // getter 
	0x18a00  func MADistribution.sourceDegreeVector.setter // setter 
	0x18a20  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x18a70  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x18b30  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x18b50  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x18ba0  func MADistribution.targetDegreeVector.getter // getter 
	0x18d80  func MADistribution.targetDegreeVector.setter // setter 
	0x18da0  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x18df0  func MADistribution.targetDegreeMatrix.getter // getter 
	0x18ec0  func MADistribution.targetDegreeMatrix.setter // setter 
	0x18ee0  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x18f30  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x19230  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x19250  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x192a0  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x19370  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x19390  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x193e0  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x196d0  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x196f0  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x19740  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x19810  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x19830  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x19880  func MADistribution.maximumSimilarityDistance.getter // getter 
	0x19930  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x1a1e0  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x1a200  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x1a250  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x1a4f0  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x1a9e0  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x1aa00  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x1aa50  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x1ac60  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x1b440  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x1b460  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x1b4b0  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x1b810  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x1c000  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x1c020  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x1c070  func MADistribution.targetCommonality(target1:target2:) // method 
	0x1c3c0  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x1cc00  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x1cc20  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1cc70  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x1cfc0  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x1d830  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x1d850  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x1d8a0  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x1dbe0  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x1e210  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xac6c000411e8 (0x46c000411e8) in binary!
	0xac68  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xac5400042348 (0x45400042348) in binary!
	0xac48  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xac4c00041930 (0x44c00041930) in binary!
	0x48000000c  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xb5d400043800 (0x5d400043800) in binary!
	0xb5e8  @objc MALearningStreamResult.(null) <stripped>
WARNING: couldn't find address 0xa530000418f0 (0x530000418f0) in binary!
	0xa524  @objc MALearningStreamResult.(null) <stripped>

	// Swift methods
	0x2c7c0  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier
	let assetClassifier : MAMultinomialNaiveBayesClassifier

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xad7400041240 (0x57400041240) in binary!
	0xa1fa  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xa1ee00041238 (0x1ee00041238) in binary!
	0xac90  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac9400041978 (0x49400041978) in binary!
	0x58000000c  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac6c000411e8 (0x46c000411e8) in binary!
	0xac68  @objc MALearningStreamUtils.(null) <stripped>
WARNING: couldn't find address 0xac5400042348 (0x45400042348) in binary!
	0xac48  @objc MALearningStreamUtils.(null) <stripped>

	// Swift methods
	0x2cad0  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x2e500  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x2e540  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
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
	0x346f0  func MASlice.weight.getter // getter 
	0x34700  func MASlice.weight.setter // setter 
	0x34710  func MASlice.weight.modify // modifyCoroutine 
	0x34780  class func MASlice.__allocating_init(graph:weight:) // init 
	0x34850  func MASlice.contentNodes() // method 
	0x34910  func MASlice.weightedContentNodes() // method 
	0x349a0  func MASlice.hasWeight() // method 
	0x349c0  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x34c70  func MASlice.contains(node:) // method 
	0x34cc0  func MASlice.representativeNodes() // method 
	0x35190  func MASlice.representations() // method 
	0x35630  func MASlice.hash(into:) // method 
	0x35720  func MASlice.equals(rhs:) // method 
	0x35790  func MASlice.tag.getter // getter 
	0x357c0  func MASlice.tag.setter // setter 
	0x357e0  func MASlice.tag.modify // modifyCoroutine 
	0x35840  func MASlice.projectionPaths(targetSlice:sourceName:targetName:) // method 
	0x359b0  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x35b20  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x35be0  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x35cb0  func MASlice.removeProjectionPaths() // method 
	0x35ce0  func MASlice.setFuzziness(closure:) // method 
	0x35d10  func MASlice.removeFuzziness() // method 
	0x35d40  func MASlice.project(node:slice:paths:progress:) // method 
	0x35d50  func MASlice.project(node:slice:paths:progress:) // method 
	0x36ad0  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x37a70  func MASlice.fragmentBy(slice:) // method 
	0x39f00  func MASlice.distributeBy(_:) // method 
	0x3a1b0  func MASlice.filter(_:) // method 
	0x3a6b0  func MASlice.hashValue.getter // getter 
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
	let domain : çç // +0x50 (0x3)
	let label : String? // +0x58 (0x10)
	let properties : [String : Swift.AnyObject]? // +0x68 (0x8)
	var $__lazy_storage_$_abstractNode : MAAbstractNode? // +0x70 (0x8)

	// Swift methods
	0x3fd00  func MAFetchSlice.abstractNode.getter // getter 
 }

 class KnowledgeGraphKit.MAQuerySlice : MASlice {

	// Properties
	let visualFormat : String
	let visualElements : [String : MAElement]?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_visualDefinitions :  empty-list 
	var $__lazy_storage_$_visualConstraints : [Any]??

	// Swift methods
	0x40420  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
	0x41610  func MAQuerySlice.visualDefinitions.getter // getter 
	0x41660  func MAQuerySlice.visualConstraints.getter // getter 
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
	0x4c750  func MAFeatureDefinition.target(for:) // method 
	0x4c8b0  func MAFeatureDefinition.contentNodes(for:) // method 
	0x4ce60  func MAFeatureDefinition.targetIndicesByName.getter // getter 
	0x4ceb0  func MAFeatureDefinition.space.getter // getter 
	0x4d140  func MAFeatureDefinition.space.setter // setter 
	0x4d150  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x4d1a0  func MAFeatureDefinition.keys.getter // getter 
	0x4d390  func MAFeatureDefinition.keys.setter // setter 
	0x4d3b0  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x4d400  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x50f10  func MAFeatureDefinition.stringValues(from:) // method 
	0x510b0  func MAFeatureDefinition.nodes(from:forKey:) // method 
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
WARNING: couldn't find address 0xa13e000437d0 (0x13e000437d0) in binary!
	0xabe0  @objc MAFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0xabe4000418c8 (0x3e4000418c8) in binary!
	0x178000000c  @objc MAFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0xa12700041af0 (0x12700041af0) in binary!
	0xb5ac  @objc MAFloatMatrixWrapper.(null) <stripped>

	// Swift methods
	0x58050  func MAFloatMatrixWrapper.floatMatrix.getter // getter 
	0x58090  class func MAFloatMatrixWrapper.__allocating_init(floatMatrix:) // init 
	0x58160  class func MAFloatMatrixWrapper.__allocating_init(rows:) // init 
 }

 class KnowledgeGraphKit.MAMutableFloatMatrixWrapper : MAFloatMatrixWrapper {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9fee00043680 (0x7ee00043680) in binary!
	0xaa90  @objc MAMutableFloatMatrixWrapper.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x60cfff1b8d8  @objc MAMutableFloatMatrixWrapper.(null) <stripped>
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
	0x5c6c0  func MATensor.size.getter // getter 
	0x5c770  func MATensor.subscript.getter // getter 
	0x5c9d0  func MATensor.subscript.getter // getter 
	0x5cae0  func MATensor.subscript.getter // getter 
	0x5cbc0  func MATensor.subscript.getter // getter 
	0x5cc60  func MATensor.slice(mode:index:) // method 
	0x5d650  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x5ded0  func MATensor.unfoldedFiber(mode:) // method 
	0x5e330  func MATensor.flatten() // method 
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
	let rows : mâ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let columns : mâ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var matrix : Gá

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
	0x8a770  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8aba0  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8a570  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0x8aff0  func MAVectorRepresentation.subscript.getter // getter 
	0x8b070  func MAVectorRepresentation.subscript.getter // getter 
	0x8b0e0  func MAVectorRepresentation.diagMatrix() // method 
	0x8b100  func MAVectorRepresentation.weighted(vector:) // method 
	0x8b120  func MAVectorRepresentation.weighted(factor:) // method 
	0x8b140  func MAVectorRepresentation.weighted(combine:) // method 
	0x8b160  func MAVectorRepresentation.normalized() // method 
	0x8b180  func MAVectorRepresentation.normalized(by:) // method 
	0x8b2a0  func MAVectorRepresentation.reversed() // method 
	0x8b2c0  func MAVectorRepresentation.filter(threshold:) // method 
	0x8b560  func MAVectorRepresentation.abs() // method 
	0x8b580  func MAVectorRepresentation.count.getter // getter 
	0x8b5e0  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0x9cb80  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x8f230  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f2d0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f350  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f450  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f520  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f650  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x8f780  func MASquareMatrixRepresentation.diagVector() // method 
	0x8f820  func MASquareMatrixRepresentation.meanVector() // method 
	0x8f9c0  func MASquareMatrixRepresentation.medianVector() // method 
	0x9cba0  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0x8fa50  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0x8faf0  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0x8fc20  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0x8fd60  func MASquareMatrixRepresentation.normalized() // method 
	0x8fe30  func MASquareMatrixRepresentation.reversed() // method 
	0x8ffa0  func MASquareMatrixRepresentation.abs() // method 
	0x9c990  func MASquareMatrixRepresentation.count.getter // getter 
	0x900d0  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0x8a5c0  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0x92430  func MAMatrixRepresentation.subscript.getter // getter 
	0x92510  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x9cbd0  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x95990  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0x96240  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x8a510  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x97f80  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0x9e080  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0x9e0d0  func MASimilarityDistance.prepare(graph:) // method 
	0x9e0e0  func MASimilarityDistance.distance(source:target:) // method 
	0x9e0f0  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
