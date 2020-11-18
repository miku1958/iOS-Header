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
	0x1ae0  class func MASparseSquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x1b30  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1bc0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1df0  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
	0x1f00  func MASparseSquareMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MASparseAdjacencyMatrixRepresentation : MASparseSquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x2010  class func MASparseAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
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
	0x6060  class func MADistribution.__allocating_init(projections:weights:) // init 
	0x6180  class func MADistribution.__allocating_init(distributions:) // init 
	0x6890  func MADistribution.sources.getter // getter 
	0x6a50  func MADistribution.targets.getter // getter 
	0x6d10  func MADistribution.size.getter // getter 
	0x6db0  func MADistribution.count.getter // getter 
	0x6de0  func MADistribution.fullSize.getter // getter 
	0x7040  func MADistribution.weight(node:) // method 
	0x7710  func MADistribution.weightsVector.getter // getter 
	0x7c50  func MADistribution.weightsVector.setter // setter 
	0x7c70  func MADistribution.weightsVector.modify // modifyCoroutine 
	0x7d00  func MADistribution.sourceWeightsVector.getter // getter 
	0x80f0  func MADistribution.sourceWeightsVector.setter // setter 
	0x8110  func MADistribution.sourceWeightsVector.modify // modifyCoroutine 
	0x81a0  func MADistribution.targetWeightsVector.getter // getter 
	0x8580  func MADistribution.targetWeightsVector.setter // setter 
	0x85a0  func MADistribution.targetWeightsVector.modify // modifyCoroutine 
	0x8630  func MADistribution.merge(distributions:) // method 
	0x8700  func MADistribution.subset(sources:) // method 
	0x8840  func MADistribution.subset(targets:) // method 
	0x9750  func MADistribution.subset(sources:targets:) // method 
	0xa6b0  func MADistribution.groupTargetsBy(sourceSlices:) // method 
	0xba20  func MADistribution.inverse() // method 
	0xc2d0  func MADistribution.intersect(distribution:) // method 
	0xcfe0  func MADistribution.projectionMatrix.getter // getter 
	0xe420  func MADistribution.projectionMatrix.setter // setter 
	0xe440  func MADistribution.projectionMatrix.modify // modifyCoroutine 
	0xe4d0  func MADistribution.weightedProjectionMatrix.getter // getter 
	0xf370  func MADistribution.weightedProjectionMatrix.setter // setter 
	0xf390  func MADistribution.weightedProjectionMatrix.modify // modifyCoroutine 
	0xf420  func MADistribution.projectionGraph.getter // getter 
	0xfdc0  func MADistribution.projectionGraph.setter // setter 
	0xfde0  func MADistribution.projectionGraph.modify // modifyCoroutine 
	0xfe70  func MADistribution.sourceSingletons.getter // getter 
	0x100a0  func MADistribution.sourceSingletons.setter // setter 
	0x100c0  func MADistribution.sourceSingletons.modify // modifyCoroutine 
	0x10150  func MADistribution.targetSingletons.getter // getter 
	0x10380  func MADistribution.targetSingletons.setter // setter 
	0x103a0  func MADistribution.targetSingletons.modify // modifyCoroutine 
	0x10430  func MADistribution.adjacencyMatrix.getter // getter 
	0x10480  func MADistribution.adjacencyMatrix.setter // setter 
	0x104a0  func MADistribution.adjacencyMatrix.modify // modifyCoroutine 
	0x10530  func MADistribution.adjacencyMatrix(directed:) // method 
	0x11020  func MADistribution.adjacencyWeightedMatrix(directed:repeating:weightedEdges:) // method 
	0x11030  func MADistribution.degreeVector(type:) // method 
	0x11f70  func MADistribution.multiDegreeVector(type:) // method 
	0x11f80  func MADistribution.transitionMatrix(directed:) // method 
	0x11f90  func MADistribution.sourceDegreeVector.getter // getter 
	0x12330  func MADistribution.sourceDegreeVector.setter // setter 
	0x12350  func MADistribution.sourceDegreeVector.modify // modifyCoroutine 
	0x123e0  func MADistribution.sourceDegreeMatrix.getter // getter 
	0x12510  func MADistribution.sourceDegreeMatrix.setter // setter 
	0x12530  func MADistribution.sourceDegreeMatrix.modify // modifyCoroutine 
	0x125c0  func MADistribution.targetDegreeVector.getter // getter 
	0x127d0  func MADistribution.targetDegreeVector.setter // setter 
	0x127f0  func MADistribution.targetDegreeVector.modify // modifyCoroutine 
	0x12880  func MADistribution.targetDegreeMatrix.getter // getter 
	0x129b0  func MADistribution.targetDegreeMatrix.setter // setter 
	0x129d0  func MADistribution.targetDegreeMatrix.modify // modifyCoroutine 
	0x12a60  func MADistribution.weightedSourceDegreeVector.getter // getter 
	0x12d80  func MADistribution.weightedSourceDegreeVector.setter // setter 
	0x12da0  func MADistribution.weightedSourceDegreeVector.modify // modifyCoroutine 
	0x12e30  func MADistribution.weightedsourceDegreeMatrix.getter // getter 
	0x12f60  func MADistribution.weightedsourceDegreeMatrix.setter // setter 
	0x12f80  func MADistribution.weightedsourceDegreeMatrix.modify // modifyCoroutine 
	0x13010  func MADistribution.weightedTargetDegreeVector.getter // getter 
	0x13320  func MADistribution.weightedTargetDegreeVector.setter // setter 
	0x13340  func MADistribution.weightedTargetDegreeVector.modify // modifyCoroutine 
	0x133d0  func MADistribution.weightedTargetDegreeMatrix.getter // getter 
	0x13500  func MADistribution.weightedTargetDegreeMatrix.setter // setter 
	0x13520  func MADistribution.weightedTargetDegreeMatrix.modify // modifyCoroutine 
	0x135b0  func MADistribution.sourceSimilarityMatrix.getter // getter 
	0x14030  func MADistribution.sourceSimilarityMatrix.setter // setter 
	0x14050  func MADistribution.sourceSimilarityMatrix.modify // modifyCoroutine 
	0x140e0  func MADistribution.sourceSimilarityDistance(source1:source2:) // method 
	0x144a0  func MADistribution.sourceSimilarityIdentityVector.getter // getter 
	0x14b20  func MADistribution.sourceSimilarityIdentityVector.setter // setter 
	0x14b40  func MADistribution.sourceSimilarityIdentityVector.modify // modifyCoroutine 
	0x14bd0  func MADistribution.sourceSimilarityIdentityDistance(source:) // method 
	0x14ee0  func MADistribution.sourceCommonalityMatrix.getter // getter 
	0x157d0  func MADistribution.sourceCommonalityMatrix.setter // setter 
	0x157f0  func MADistribution.sourceCommonalityMatrix.modify // modifyCoroutine 
	0x15880  func MADistribution.sourceCommonality(source1:source2:) // method 
	0x15c50  func MADistribution.targetCommonalityMatrix.getter // getter 
	0x16630  func MADistribution.targetCommonalityMatrix.setter // setter 
	0x16650  func MADistribution.targetCommonalityMatrix.modify // modifyCoroutine 
	0x166e0  func MADistribution.targetCommonality(target1:target2:) // method 
	0x16aa0  func MADistribution.sourceIdentityCommonalityMatrix.getter // getter 
	0x17430  func MADistribution.sourceIdentityCommonalityMatrix.setter // setter 
	0x17450  func MADistribution.sourceIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x174e0  func MADistribution.sourceIdentityCommonality(source1:source2:) // method 
	0x178b0  func MADistribution.targetIdentityCommonalityMatrix.getter // getter 
	0x18250  func MADistribution.targetIdentityCommonalityMatrix.setter // setter 
	0x18270  func MADistribution.targetIdentityCommonalityMatrix.modify // modifyCoroutine 
	0x18300  func MADistribution.targetIdentityCommonality(target1:target2:) // method 
	0x186b0  func MADistribution.sourceCustomCommonalityMatrix(closure:) // method 
	0x18c70  func MADistribution.projectionSingularDecompositionMatrix(elbowThreshold:) // method 
 }

 class KnowledgeGraphKit.MALearningStreamResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let detectedClass : String
	let confidence : Double

	// ObjC -> Swift bridged methods
	0x24530  @objc MALearningStreamResult.detectedClass.getter
	0x245b0  @objc MALearningStreamResult.confidence.getter
	0x246c0  @objc MALearningStreamResult.description.getter
	0x248d0  @objc MALearningStreamResult.init()
	0x24880  @objc MALearningStreamResult.__ivar_destroyer

	// Swift methods
	0x245f0  class func MALearningStreamResult.__allocating_init(with:confidence:) // init 
 }

 class KnowledgeGraphKit.MALearningStreamUtils : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let momentClassifier : MAMultinomialNaiveBayesClassifier // +0x8 (0x8)
	let assetClassifier : MAMultinomialNaiveBayesClassifier // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x24f40  @objc MALearningStreamUtils.init(withClasses:momentFeatureVectors:assetFeatureVectors:)
	0x265d0  @objc MALearningStreamUtils.classifyMoments(inputFeatureVectors:)
	0x26610  @objc MALearningStreamUtils.classifyAssets(inputFeatureVectors:)
	0x268e0  @objc MALearningStreamUtils.init()
	0x26860  @objc MALearningStreamUtils.__ivar_destroyer

	// Swift methods
	0x24900  class func MALearningStreamUtils.__allocating_init(withClasses:momentFeatureVectors:assetFeatureVectors:) // init 
	0x265b0  func MALearningStreamUtils.classifyMoments(inputFeatureVectors:) // method 
	0x265f0  func MALearningStreamUtils.classifyAssets(inputFeatureVectors:) // method 
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
	0x2be10  func MASlice.weight.getter // getter 
	0x2be20  func MASlice.weight.setter // setter 
	0x2be30  func MASlice.weight.modify // modifyCoroutine 
	0x2bea0  class func MASlice.__allocating_init(graph:weight:) // init 
	0x2bf70  func MASlice.contentNodes() // method 
	0x2c010  func MASlice.weightedContentNodes() // method 
	0x2c0a0  func MASlice.hasWeight() // method 
	0x2c0c0  func MASlice.fuzzyContentNodes(precision:progress:) // method 
	0x2c3a0  func MASlice.contains(node:) // method 
	0x2c3f0  func MASlice.representativeNodes() // method 
	0x2c840  func MASlice.representations() // method 
	0x2cc60  func MASlice.hash(into:) // method 
	0x2cd50  func MASlice.equals(rhs:) // method 
	0x2cde0  func MASlice.tag.getter // getter 
	0x2ce10  func MASlice.tag.setter // setter 
	0x2ce30  func MASlice.tag.modify // modifyCoroutine 
	0x2cee0  func MASlice.projectionPaths(sourceNode:targetSlice:sourceName:targetName:defaults:) // method 
	0x2d0f0  func MASlice.setProjectionPaths(targetSlice:closure:) // method 
	0x2d1b0  func MASlice.removeProjectionPaths(targetSlice:) // method 
	0x2d1e0  func MASlice.removeProjectionPaths() // method 
	0x2d210  func MASlice.setFuzziness(closure:) // method 
	0x2d240  func MASlice.removeFuzziness() // method 
	0x2d270  func MASlice.project(node:slice:paths:progress:) // method 
	0x2d280  func MASlice.project(node:slice:paths:progress:) // method 
	0x2e320  func MASlice.projectTo(slice:paths:precision:progress:) // method 
	0x2f5a0  func MASlice.fragmentBy(slice:) // method 
	0x31930  func MASlice.distributeBy(_:) // method 
	0x31be0  func MASlice.filter(_:) // method 
	0x32090  func MASlice.hashValue.getter // getter 
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
	let domain : Û, // +0x50 (0x3)
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
	0x38690  func MAQuerySlice.constrainWith(visualFormat:visualElements:) // method 
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
	0x4bfa0  func MAFeatureDefinition.target(for:) // method 
	0x4c0d0  func MAFeatureDefinition.contentNodes(for:) // method 
	0x4c650  func MAFeatureDefinition.space.getter // getter 
	0x4c8e0  func MAFeatureDefinition.space.setter // setter 
	0x4c8f0  func MAFeatureDefinition.space.modify // modifyCoroutine 
	0x4c940  func MAFeatureDefinition.keys.getter // getter 
	0x4cb30  func MAFeatureDefinition.keys.setter // setter 
	0x4cb50  func MAFeatureDefinition.keys.modify // modifyCoroutine 
	0x4cbe0  func MAFeatureDefinition.extract<A>(items:progress:) // method 
	0x4fdf0  func MAFeatureDefinition.stringValues(from:) // method 
	0x50270  func MAFeatureDefinition.nodes(from:forKey:) // method 
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
	0x5a800  func MATensor.size.getter // getter 
	0x5a8b0  func MATensor.subscript.getter // getter 
	0x5ab00  func MATensor.subscript.getter // getter 
	0x5ac10  func MATensor.subscript.getter // getter 
	0x5acf0  func MATensor.subscript.getter // getter 
	0x5ad90  func MATensor.slice(mode:index:) // method 
	0x5bf20  func MATensor.fiber(mode:indexI:indexJ:) // method 
	0x5c7f0  func MATensor.unfoldedFiber(mode:) // method 
	0x5cc40  func MATensor.flatten() // method 
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
	let rows : U& // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let columns : U& // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var matrix : w% // +0x28 (0x8)

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
	0x87fb0  class func MANaiveBayesClassifier.__allocating_init(classes:data:) // init 
	0x88750  func MANaiveBayesClassifier.train(progress:) // method 
	0x88f70  func MANaiveBayesClassifier.classify(with:) // method 
	0x88ff0  func MANaiveBayesClassifier.classify(with:limit:) // method 
	0x8a420  func MANaiveBayesClassifier.train(with:) // method 
	0x8a430  func MANaiveBayesClassifier.likelihood(training:feature:) // method 
 }

 class KnowledgeGraphKit.MAMultinomialNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAGaussianNaiveBayesClassifier : MANaiveBayesClassifier { }

 class KnowledgeGraphKit.MAVectorRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let vector : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0x906a0  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x90af0  class func MAVectorRepresentation.__allocating_init<A>(_:) // init 
	0x8fec0  class func MAVectorRepresentation.__allocating_init(vector:nodes:) // init 
	0x90f60  func MAVectorRepresentation.subscript.getter // getter 
	0x90fe0  func MAVectorRepresentation.subscript.getter // getter 
	0x91050  func MAVectorRepresentation.diagMatrix() // method 
	0x91070  func MAVectorRepresentation.weighted(vector:) // method 
	0x91090  func MAVectorRepresentation.weighted(factor:) // method 
	0x910b0  func MAVectorRepresentation.weighted(combine:) // method 
	0x910d0  func MAVectorRepresentation.normalized() // method 
	0x910f0  func MAVectorRepresentation.normalized(by:) // method 
	0x91230  func MAVectorRepresentation.reversed() // method 
	0x91250  func MAVectorRepresentation.filter(threshold:) // method 
	0x91510  func MAVectorRepresentation.abs() // method 
	0x91530  func MAVectorRepresentation.count.getter // getter 
	0x91590  func MAVectorRepresentation.merge(nodes:with:) // method 
 }

 class KnowledgeGraphKit.MASquareMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let nodes : [MANode]

	// Swift methods
	0xa6520  class func MASquareMatrixRepresentation.__allocating_init(matrix:nodes:) // init 
	0x96430  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x964d0  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96550  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96650  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96720  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x96890  func MASquareMatrixRepresentation.subscript.getter // getter 
	0x969f0  func MASquareMatrixRepresentation.diagVector() // method 
	0x96a90  func MASquareMatrixRepresentation.meanVector() // method 
	0x96c20  func MASquareMatrixRepresentation.medianVector() // method 
	0xa6530  func MASquareMatrixRepresentation.weighted(vector:) // method 
	0x96cb0  func MASquareMatrixRepresentation.weighted(matrix:) // method 
	0x96d50  func MASquareMatrixRepresentation.weighted(factor:) // method 
	0x96ea0  func MASquareMatrixRepresentation.weighted(combine:) // method 
	0x97000  func MASquareMatrixRepresentation.normalized() // method 
	0x970d0  func MASquareMatrixRepresentation.reversed() // method 
	0x97250  func MASquareMatrixRepresentation.abs() // method 
	0xa63a0  func MASquareMatrixRepresentation.count.getter // getter 
	0x973c0  func MASquareMatrixRepresentation.similarityMatrix(distance:identity:) // method 
 }

 class KnowledgeGraphKit.MAMatrixRepresentation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let matrix : MAMatrix
	let rnodes : [MANode]
	let cnodes : [MANode]

	// Swift methods
	0x8ff10  class func MAMatrixRepresentation.__allocating_init(matrix:rnodes:cnodes:) // init 
	0x995d0  func MAMatrixRepresentation.subscript.getter // getter 
	0x996b0  func MAMatrixRepresentation.subscript.getter // getter 
 }

 class KnowledgeGraphKit.MAAdjacencyMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0xa6560  class func MAAdjacencyMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x9cb00  func MAAdjacencyMatrixRepresentation.commonNeighboursCount(source:target:) // method 
	0x9d4f0  func MAAdjacencyMatrixRepresentation.commonNeighbours(source:target:) // method 
 }

 class KnowledgeGraphKit.MAPathMatrixRepresentation : MASquareMatrixRepresentation {

	// Properties
	let directed : Bool

	// Swift methods
	0x8fe60  class func MAPathMatrixRepresentation.__allocating_init(matrix:nodes:directed:) // init 
	0x9f6f0  func MAPathMatrixRepresentation.shortestPath(from:to:) // method 
 }

 class KnowledgeGraphKit.MASimilarityDistance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let directed : Bool
	let options : [String : Any]

	// Swift methods
	0xa8210  class func MASimilarityDistance.__allocating_init(directed:options:) // init 
	0xa8260  func MASimilarityDistance.prepare(graph:) // method 
	0xa8270  func MASimilarityDistance.distance(source:target:) // method 
	0xa8280  class func static MASimilarityDistance.distance(source:target:directed:options:) // method 
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
