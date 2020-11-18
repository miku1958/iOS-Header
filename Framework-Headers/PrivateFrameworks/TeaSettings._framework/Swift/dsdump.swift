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
	let extends : Preset
	var apply : PresetApplicatorType

	// Swift methods
	0x2020  class func Preset.__allocating_init(extends:apply:) // init 
 }

 class TeaSettings.SettingGroup : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var enabledSetting : Setting

	// Swift methods
	0x2140  func <stripped> // getter 
	0x2180  func <stripped> // method 
	0x2230  class func SettingGroup.__allocating_init(key:defaultValue:access:) // init 
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

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b3a000076e0 (0x33a000076e0) in binary!
	0x0  @objc SettingsStore.(null) <stripped>

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

 class TeaSettings.SettingProperty {
 class TeaSettings.PresetItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let preset : Preset
	let label : String
	let actions : SettingAction

	// Swift methods
	0xdf70  class func PresetItem.__allocating_init(_:label:actions:) // init 
	0xdfe0  func <stripped> // getter 
	0xe270  func <stripped> // getter 
 }

 enum TeaSettings.FeatureState {

	// Properties
	case default  
	case enabled  
	case disabled  
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
	0x11d50  func <stripped> // getter 
	0x11d80  func <stripped> // setter 
	0x11dc0  func <stripped> // modifyCoroutine 
	0x11ac0  class func SettingAction.__allocating_init(_:_:) // init 
	0x11e60  func <stripped> // method 
	0x11eb0  func <stripped> // method 
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
	var updater : Updatable
	var presets : Preset

	// Swift methods
	0x12ac0  class func PresetManager.__allocating_init() // init 
 }

 enum TeaSettings.Domain {

	// Properties
	case domain : String
	case standard  
 }

 struct TeaSettings.SettingsBundle {

	// Properties
	let label : String // +0x0
	let cellStyle : SettingCellStyle // +0x10
	let isEnabled : Bool // +0x61
	let isVisible : Bool // +0x62
	let layout : Group // +0x68
 }

 class TeaSettings.PresetStartupTask : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let presetManager : PresetManagerType

	// Swift methods
	0x14dd0  class func PresetStartupTask.__allocating_init(presetManager:) // init 
	0x14e70  func <stripped> // method 
 }

 class TeaSettings.ResetItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let isEnabled : Bool
	let isVisible : Bool
	let label : String
	let layout : Group

	// Swift methods
	0x155d0  class func ResetItem.__allocating_init(layout:) // init 
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
