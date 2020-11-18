 protocol TeaSettings.Resettable // 1 requirements
 {
	// method
 }
 protocol TeaSettings.Groupable // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol TeaSettings.Settable // 4 requirements
 {
	// class base protocol
	// class getter
	// class method
	// method
 }
 protocol TeaSettings.RangeType // 0 requirements
 {
 }
 protocol TeaSettings.OptionType // 0 requirements
 {
 }
 protocol TeaSettings.Updatable // 4 requirements
 {
	// class base protocol
	// method
	// method
	// method
 }
 protocol TeaSettings.ConditionType // 1 requirements
 {
	// method
 }
 protocol TeaSettings.SettingType // 9 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
	// method
 }
 protocol TeaSettings.Configurable // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol TeaSettings.PresetApplicatorType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaSettings.PresetManagerType // 2 requirements
 {
	// method
	// method
 }

 class TeaSettings.Preset : Presets {

	// Properties
	let extends : Preset // +0x10 (0x8)
	var apply : PresetApplicatorType // +0x18 (0x10)

	// Swift methods
	0x2270  class func Preset.__allocating_init(extends:apply:) // init 
 }

 class TeaSettings.SettingGroup : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var enabledSetting : Setting // +0x10 (0x8)

	// Swift methods
	0x23a0  func <stripped> // getter 
	0x23e0  func <stripped> // method 
	0x2490  class func SettingGroup.__allocating_init(key:defaultValue:access:) // init 
 }

 enum TeaSettings.Access {

	// Properties
	case public  
	case protected  
	case debug  
 }

 class TeaSettings.SettingsStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var standardUserDefaults : NSUserDefaults
	var observers : SettingObserver

	// Swift methods
 }

 class TeaSettings.SettingObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject?
	let closure : ()

	// Swift methods
 }

 enum TeaSettings.ChangeBehavior {

	// Properties
	case default  
	case reloadGroup  
 }

 enum TeaSettings.SettingCellStyle {

	// Properties
	case switch : SettingAction
	case toggle : SettingAction
	case textField : SettingAction
	case secureTextField : SettingAction
	case stepper : SettingAction
	case slider : SettingAction
	case page : Group
	case options : Group
	case button : ButtonStyle
	case buttonWithConfirmation : ButtonStyle
	case unknown  
 }

 enum TeaSettings.ButtonStyle {

	// Properties
	case default  
	case destructive  
 }

 struct TeaSettings.Group {

	// Properties
	let title : String? // +0x0
	let footer : String? // +0x10
	let items : Groupable // +0x20
 }

 class TeaSettings.SettingReader : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let reader : Reader

	// Swift methods
 }

 class TeaSettings.Reader : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct TeaSettings.Option {

	// Properties
	let label : String
	let value : A
	let description : String?
 }

 struct TeaSettings.Page {

	// Properties
	let title : String // +0x0
	let layout : Group // +0x10
 }

 class TeaSettings.Setting {
 enum TeaSettings.Trait {

	// Properties
	case options : Option
	case range : (min: A, max: A)
	case none  
 }

 class TeaSettings.Settings : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaSettings.PresetItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let preset : Preset // +0x10 (0x8)
	let label : String // +0x18 (0x10)
	let actions : SettingAction // +0x28 (0x8)

	// Swift methods
	0xe390  class func PresetItem.__allocating_init(_:label:actions:) // init 
	0xe400  func <stripped> // getter 
	0xe740  func <stripped> // getter 
 }

 class TeaSettings.OptionItem {
 class TeaSettings.Item {
 enum TeaSettings.RangeControlType {

	// Properties
	case stepper : (stepValue: Float)
	case slider  
 }

 enum TeaSettings.ResetBehavior {

	// Properties
	case reset  
	case persist  
 }

 enum TeaSettings.Context {

	// Properties
	case basic  
	case enum  
 }

 class TeaSettings.SettingActions : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaSettings.SettingAction : SettingActions {

	// Properties
	let identifier : String
	var postInstructions : PostInstruction
	let closure : Updatable

	// Swift methods
	0x11c60  func <stripped> // getter 
	0x11c90  func <stripped> // setter 
	0x11cd0  func <stripped> // modifyCoroutine 
	0x119d0  class func SettingAction.__allocating_init(_:_:) // init 
	0x11d70  func <stripped> // method 
	0x11e00  func <stripped> // method 
 }

 enum TeaSettings.PostInstruction {

	// Properties
	case killProcess  
 }

 class TeaSettings.Updater : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaSettings.PresetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PresetManagerType {

	// Properties
	var updater : Updatable // +0x10 (0x10)
	var presets : Preset // +0x20 (0x8)

	// Swift methods
	0x12620  class func PresetManager.__allocating_init() // init 
 }

 enum TeaSettings.Domain {

	// Properties
	case domain : String
	case standard  
 }

 class TeaSettings.PresetStartupTask : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let presetManager : PresetManagerType // +0x10 (0x28)

	// Swift methods
	0x13e90  class func PresetStartupTask.__allocating_init(presetManager:) // init 
	0x13f20  func <stripped> // method 
 }

 class TeaSettings.ResetItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let isEnabled : Bool // +0x10 (0x1)
	let isVisible : Bool // +0x11 (0x1)
	let label : String // +0x18 (0x10)
	let layout : Group // +0x28 (0x8)

	// Swift methods
	0x14ab0  class func ResetItem.__allocating_init(layout:) // init 
 }

 class TeaSettings.Presets : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum TeaSettings.DataType {

	// Properties
	case string  
	case bool  
	case integer  
	case int64  
	case float  
	case double  
 }

 struct TeaSettings.ConditionalItem {

	// Properties
	let item : Groupable // +0x0
	let condition : () // +0x28
 }
