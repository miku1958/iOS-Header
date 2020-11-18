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
	0x1b60  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1bb0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1c40  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1e70  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1f80  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x2090  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
 }

 class KnowledgeGraphKit.MADistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let projections : [MANode : Set<MANode>] // +0x10 (0x8)
	let weights : [MANode : Double]? // +0x18 (0x8)
	var $__lazy_storage_$_weightsVector : MAVectorRepresentation // +0x20 (0x8)
	var $__lazy_storage_$_sourceWeightsVector : MAVectorRepresentation // +0x28 (0x8)
	var $__lazy_storage_$_targetWeightsVector : MAVectorRepresentation // +0x30 (0x8)
	var $__lazy_storage_$_projectionMatrix : MAMatrixRepresentation // +0x38 (0x8)
	var $__lazy_storage_$_weightedProjectionMatrix : MAMatrixRepresentation // +0x40 (0x8)
	var $__lazy_storage_$_projectionGraph : MAGraph? // +0x48 (0x8)
	var $__lazy_storage_$_sourceSingletons : Set<MANode>? // +0x50 (0x8)
	var $__lazy_storage_$_targetSingletons : Set<MANode>? // +0x58 (0x8)
	var $__lazy_storage_$_adjacencyMatrix : MAAdjacencyMatrixRepresentation // +0x60 (0x8)
	var $__lazy_storage_$_sourceDegreeVector : MAVectorRepresentation // +0x68 (0x8)
	var $__lazy_storage_$_sourceDegreeMatrix : MASquareMatrixRepresentation // +0x70 (0x8)
	var $__lazy_storage_$_targetDegreeVector : MAVectorRepresentation // +0x78 (0x8)
	var $__lazy_storage_$_targetDegreeMatrix : MASquareMatrixRepresentation // +0x80 (0x8)
	var $__lazy_storage_$_weightedSourceDegreeVector : MAVectorRepresentation // +0x88 (0x8)
	var $__lazy_storage_$_weightedsourceDegreeMatrix : MASquareMatrixRepresentation // +0x90 (0x8)
	var $__lazy_storage_$_weightedTargetDegreeVector : MAVectorRepresentation // +0x98 (0x8)
	var $__lazy_storage_$_weightedTargetDegreeMatrix : MASquareMatrixRepresentation // +0xa0 (0x8)
	var $__lazy_storage_$_maximumSimilarityDistance : Double? // +0xa8 (0x9)
	var $__lazy_storage_$_sourceSimilarityMatrix : MASquareMatrixRepresentation // +0xb8 (0x8)
	var $__lazy_storage_$_sourceSimilarityIdentityVector : MAVectorRepresentation // +0xc0 (0x8)
	var $__lazy_storage_$_sourceCommonalityMatrix : MASquareMatrixRepresentation // +0xc8 (0x8)
	var $__lazy_storage_$_targetCommonalityMatrix : MASquareMatrixRepresentation // +0xd0 (0x8)
	var $__lazy_storage_$_sourceIdentityCommonalityMatrix : MASquareMatrixRepresentation // +0xd8 (0x8)
	var $__lazy_storage_$_targetIdentityCommonalityMatrix : MASquareMatrixRepresentation // +0xe0 (0x8)

	// Swift methods
	0x60e0  class func MADistribution.__allocating_init(projections:weights:) // init 
	0x6200  class func MADistribution.__allocating_init(distributions:) // init 
	0x6910  func MADistribution.sources.getter // getter 
	0x6ad0  func MADistribution.targets.getter // getter 
	0x6d90  func MADistribution.size.getter // getter 
	0x6e30  func MADistribution.count.getter // getter 
	0x6e60  func MADistribution.fullSize.getter // getter 
	0x70c0  func MADistribution.weight(node:) // method 
	0x7790  func MADistribution.weightsVector.getter // getter 
	0x7cd0  func MADistribution.weightsVector.setter // setter 
	0x7cf0  func MADistribution.weightsVector.modify // modifyCoroutine 
	0x7d80  func MADistribution.sourceWeightsVector.getter // getter 
	0x8170  func MADistribution.sourceWeightsVector.setter // setter 
	0x8190  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0x8220  func MADistribution.targetWeightsVector.getter // getter 
	0x8600  func MADistribution.targetWeightsVector.setter // setter 
	0x8620  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0x86b0  func MADistribution.merge(distributions:) // method 
	0x8780  func MADistribution.subset(sources:) // method 
	0x88c0  func MADistribution.subset(targets:) // method 
	0x97d0  func MADistribution.subset(sources:targets:) // method 
	0xa730  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0xbaa0  func MADistribution.inverse() // method 
	0xc350  func MADistribution.intersect(distribution:) // method 
	0xd060  func MADistribution.projectionMatrix.getter // getter 
	0xe4a0  func MADistribution.projectionMatrix.setter // setter 
	0xe4c0  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0xe550  func MADistribution.weightedProjectionMatrix.getter // getter 
	0xf3f0  func MADistribution.weightedProjectionMatrix.setter // setter 
	0xf410  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0xf4a0  func MADistribution.projectionGraph.getter // getter 
	0xfe40  func MADistribution.projectionGraph.setter // setter 
	0xfe60  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0xfef0  func MADistribution.sourceSingletons.getter // getter 
	0x10120  func MADistribution.sourceSingletons.setter // setter 
	0x10140  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x101d0  func MADistribution.targetSingletons.getter // getter 
	0x10400  func MADistribution.targetSingletons.setter // setter 
	0x10420  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x104b0  func MADistribution.adjacencyMatrix.getter // getter 
	0x10500  func MADistribution.adjacencyMatrix.setter // setter 
	0x10520  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x105b0  func MADistribution.adjacencyMatrix(directed:) // method 
	0x110a0  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x110b0  func MADistribution.degreeVector(type:) // method 
	0x11ff0  func MADistribution.multiDegreeVector(type:) // method 
	0x12000  func MADistribution.transitionMatrix(directed:) // method 
	0x12010  func MADistribution.sourceDegreeVector.getter // getter 
	0x123b0  func MADistribution.sourceDegreeVector.setter // setter 
	0x123d0  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x12460  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x12590  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x125b0  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x12640  func MADistribution.targetDegreeVector.getter // getter 
	0x12850  func MADistribution.targetDegreeVector.setter // setter 
	0x12870  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x12900  func MADistribution.targetDegreeMatrix.getter // getter 
	0x12a30  func MADistribution.targetDegreeMatrix.setter // setter 
	0x12a50  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x12ae0  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x12e00  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x12e20  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x12eb0  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x12fe0  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x13000  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x13090  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x133a0  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x133c0  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x13450  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x13580  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x135a0  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x13630  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x140b0  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x140d0  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x14160  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x14520  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x14ba0  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x14bc0  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x14c50  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x14f60  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x15850  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x15870  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x15900  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x15cd0  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x166b0  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x166d0  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x16760  func MADistribution.targetCommonality(target1:target2:) // method 
	0x16b20  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x174b0  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x174d0  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x17560  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x17930  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x182d0  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x182f0  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x18380  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x18730  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x18cf0  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
	0x245b0  @objc MALearningStreamResult.detectedClass.getter
	0x24630  @objc MALearningStreamResult.confidence.getter
	0x24740  @objc MALearningStreamResult.description.getter
	0x24950  @objc MALearningStreamResult.init()
	0x24900  @objc MALearningStreamResult.__ivar_destroyer

	// Swift methods
	0x24670  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier // +0x8 (0x8)
	let assetClassifier : MAMultinomialNaiveBayesClassifier // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x24fc0  @objc MALearningStreamUtils.init(withClasses:momentFeatureVectors:assetFeatureVectors:)
	0x26650  @objc MALearningStreamUtils.classifyMoments(inputFeatureVectors:)
	0x26690  @objc MALearningStreamUtils.classifyAssets(inputFeatureVectors:)
	0x26960  @objc MALearningStreamUtils.init()
	0x268e0  @objc MALearningStreamUtils.__ivar_destroyer

	// Swift methods
	0x24980  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x26630  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x26670  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
 }

 class KnowledgeGraphKit.MASlice : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let graph : MAGraph // +0x10 (0x8)
	let nodes : Set<MANode>? // +0x18 (0x8)
	var weight : Double // +0x20 (0x8)
	var projectionPaths : MASlice // +0x28 (0x8)
	var fuzzinessClosure : (_:_:_:)? // +0x30 (0x10)
	var _tag : String? // +0x40 (0x10)

	// Swift methods
	0x2be90  func MASlice.weight.getter // getter 
	0x2bea0  func MASlice.weight.setter // setter 
	0x2beb0  func MASlice.weight.modify // modifyCoroutine 
	0x2bf20  class func MASlice.__allocating_init(graph:weight:) // init 
	0x2bff0  func MASlice.contentNodes() // method 
	0x2c090  func MASlice.weightedContentNodes() // method 
	0x2c120  func MASlice.hasWeight() // method 
	0x2c140  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x2c420  func MASlice.contains(node:) // method 
	0x2c470  func MASlice.representativeNodes() // method 
	0x2c8c0  func MASlice.representations() // method 
	0x2cce0  func MASlice.hash(into:) // method 
	0x2cdd0  func MASlice.equals(rhs:) // method 
	0x2ce60  func MASlice.tag.getter // getter 
	0x2ce90  func MASlice.tag.setter // setter 
	0x2ceb0  func MASlice.tag.modify // modifyCoroutine 
	0x2cf60  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x2d170  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x2d230  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x2d260  func MASlice.removeProjectionPaths() // method 
	0x2d290  func MASlice.setFuzziness(closure:) // method 
	0x2d2c0  func MASlice.removeFuzziness() // method 
	0x2d2f0  func MASlice.project(node:slice:paths:progress:) // method 
	0x2d300  func MASlice.project(node:slice:paths:progress:) // method 
	0x2e3a0  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x2f620  func MASlice.fragmentBy(slice:) // method 
	0x319b0  func MASlice.distributeBy(_:) // method 
	0x31c60  func MASlice.filter(_:) // method 
	0x32110  func MASlice.hashValue.getter // getter 
 }

 class KnowledgeGraphKit.MASlices : MASlice {

	// Properties
	let slices : MASlice

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
	let domain : ã, // +0x50 (0x3)
	let label : String? // +0x58 (0x10)
	let properties : [String : Swift.AnyObject]? // +0x68 (0x8)
	var $__lazy_storage_$_abstractNode : MAAbstractNode? // +0x70 (0x8)

	// Swift methods
 }

 class KnowledgeGraphKit.MAQuerySlice : MASlice {

	// Properties
	let visualFormat : String
	let visualElements : [String : MAElement]?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_visualDefinitions :  empty-list 
	var $__lazy_storage_$_visualConstraints : [Any]??

	// Swift methods
	0x38710  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
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
	let targets : MASlice // +0x20 (0x8)
	var targetsByName : MASlice // +0x28 (0x8)
	var contentNodesBySlices : MASlice // +0x30 (0x8)
	var $__lazy_storage_$_targetIndicesByName : [String : Int]? // +0x38 (0x8)
	var $__lazy_storage_$_space : Int? // +0x40 (0x9)
	var $__lazy_storage_$_keys : [String]? // +0x50 (0x8)

	// Swift methods
	0x4c020  func MAFeatureDefinition.target(for:) // method 
	0x4c150  func MAFeatureDefinition.contentNodes(for:) // method 
	0x4c6d0  func MAFeatureDefinition.space.getter // getter 
	0x4c960  func MAFeatureDefinition.space.setter // setter 
	0x4c970  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x4c9c0  func MAFeatureDefinition.keys.getter // getter 
	0x4cbb0  func MAFeatureDefinition.keys.setter // setter 
	0x4cbd0  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x4cc60  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x4fe70  func MAFeatureDefinition.stringValues(from:) // method 
	0x502f0  func MAFeatureDefinition.nodes(from:forKey:) // method 
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
	0x5a880  func MATensor.size.getter // getter 
	0x5a930  func MATensor.subscript.getter // getter 
	0x5ab80  func MATensor.subscript.getter // getter 
	0x5ac90  func MATensor.subscript.getter // getter 
	0x5ad70  func MATensor.subscript.getter // getter 
	0x5ae10  func MATensor.slice(mode:index:) // method 
	0x5bfa0  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x5c870  func MATensor.unfoldedFiber(mode:) // method 
	0x5ccc0  func MATensor.flatten() // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rows : ]& // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let columns : ]& // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var matrix : % // +0x28 (0x8)

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
WARNING: couldn't find address 0x0 (0x0) in binary!
	var classes :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var training :  empty-list 

	// Swift methods
	0x88030  class func MANaiveBayesClassifier.__allocating_init(classes:data:) // init 
	0x887d0  func MANaiveBayesClassifier.train(progress:) // method 
	0x88ff0  func MANaiveBayesClassifier.classify(with:) // method 
	0x89070  func MANaiveBayesClassifier.classify(with:limit:) // method 
	0x8a4a0  func MANaiveBayesClassifier.train(with:) // method 
	0x8a4b0  func MANaiveBayesClassifier.likelihood(training:feature:) // method 
 }

 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0x90720  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x90b70  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8ff40  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0x90fe0  func MAVectorRepresentation.subscript.getter // getter 
	0x91060  func MAVectorRepresentation.subscript.getter // getter 
	0x910d0  func MAVectorRepresentation.diagMatrix() // method 
	0x910f0  func MAVectorRepresentation.weighted(vector:) // method 
	0x91110  func MAVectorRepresentation.weighted(factor:) // method 
	0x91130  func MAVectorRepresentation.weighted(combine:) // method 
	0x91150  func MAVectorRepresentation.normalized() // method 
	0x91170  func MAVectorRepresentation.normalized(by:) // method 
	0x912b0  func MAVectorRepresentation.reversed() // method 
	0x912d0  func MAVectorRepresentation.filter(threshold:) // method 
	0x91590  func MAVectorRepresentation.abs() // method 
	0x915b0  func MAVectorRepresentation.count.getter // getter 
	0x91610  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0xa65a0  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x964b0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96550  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x965d0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x966d0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x967a0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96910  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96a70  func MASquareMatrixRepresentation.diagVector() // method 
	0x96b10  func MASquareMatrixRepresentation.meanVector() // method 
	0x96ca0  func MASquareMatrixRepresentation.medianVector() // method 
	0xa65b0  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0x96d30  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0x96dd0  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0x96f20  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0x97080  func MASquareMatrixRepresentation.normalized() // method 
	0x97150  func MASquareMatrixRepresentation.reversed() // method 
	0x972d0  func MASquareMatrixRepresentation.abs() // method 
	0xa6420  func MASquareMatrixRepresentation.count.getter // getter 
	0x97440  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0x8ff90  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0x99650  func MAMatrixRepresentation.subscript.getter // getter 
	0x99730  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xa65e0  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x9cb80  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0x9d570  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x8fee0  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x9f770  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0xa8290  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0xa82e0  func MASimilarityDistance.prepare(graph:) // method 
	0xa82f0  func MASimilarityDistance.distance(source:target:) // method 
	0xa8300  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
