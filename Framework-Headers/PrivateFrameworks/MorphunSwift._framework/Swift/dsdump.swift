 class __C.CFError {
 enum MorphunSwift.MorphunError {

	// Properties
	case error : String
	case tokenizationError : String
 }

 enum MorphunSwift.TokenType {

	// Properties
	case Head  
	case Tail  
	case Word  
	case Delimiter  
	case Explicit  
	case Oversized  
	case Morphological  
 }

 enum MorphunSwift.TokenizationType {

	// Properties
	case Default  
	case Minimal  
	case Unmodified  
 }

 struct MorphunSwift.Token {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let token : Q
 // +0x0
	let chain : TokenChain // +0x8
 }

 class MorphunSwift.TokenChain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let chain : Q
 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentToken : K
 // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var errorRef : ª
 // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_wordCount : õ
 // +0x28 (0x5)
	var $__lazy_storage_$_description : String? // +0x30 (0x10)
	var $__lazy_storage_$_debugDescription : String? // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let size : ç
 // +0x50 (0x4)

	// Swift methods
	0x18b0  func <stripped> // getter 
	0x19f0  func <stripped> // getter 
	0x1bc0  func <stripped> // getter 
	0x1e90  func <stripped> // method 
 }

 class MorphunSwift.Tokenizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tokenizer : Q

WARNING: couldn't find address 0x0 (0x0) in binary!
	var error :  empty-list 

	// Swift methods
	0x2150  class func Tokenizer.__allocating_init(locale:) // init 
	0x2320  func <stripped> // method 
	0x2490  func <stripped> // method 
	0x25b0  func <stripped> // getter 
	0x25d0  func <stripped> // setter 
	0x25f0  func <stripped> // modifyCoroutine 
	0x2680  func <stripped> // getter 
	0x2780  func <stripped> // setter 
	0x2880  func <stripped> // modifyCoroutine 
 }

 enum MorphunSwift.ConfigurationFeature {

	// Properties
	case AnnotateMorphology  
	case LowerCase  
	case LowerCaseBeforeNormalizingWords  
	case NormalizeCharacters  
	case NormalizeNumbers  
	case NormalizeWords  
	case RemoveAllPunctuation  
	case RemovePunctuation  
	case RemoveStopWords  
	case TransliterateToLatinScript  
	case RemoveAllDiacritics  
	case SplitPunctuation  
 }

 class MorphunSwift.ConfigurableAnalyzer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let configurableAnalyzer : Q
 // +0x10 (0x8)

	// Swift methods
	0x3810  func <stripped> // method 
	0x3960  func <stripped> // method 
 }

 class MorphunSwift.DefaultAnalyzerFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultAnalyzerFactory : Q


	// Swift methods
	0x3ad0  class func DefaultAnalyzerFactory.__allocating_init(configOptions:) // init 
	0x3c00  func <stripped> // method 
 }
