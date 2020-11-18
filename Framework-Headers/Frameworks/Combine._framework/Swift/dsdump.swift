 protocol Combine.Cancellable // 1 requirements
 {
	// method
 }
 protocol Combine.Subscription // 3 requirements
 {
	// class base protocol
	// class base protocol
	// method
 }
 protocol Combine.TopLevelDecoder // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol Combine.TopLevelEncoder // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol Combine.ObservableObject // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
 }
 protocol Combine._ObservableObjectProperty // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol Combine.Publisher // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol Combine.ConnectablePublisher // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol Combine.Subscriber // 7 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol Combine._Introspection // 12 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol Combine.SubscriberTapMarker // 1 requirements
 {
	// getter
 }
 protocol Combine.Subject // 4 requirements
 {
	// class base protocol
	// method
	// method
	// method
 }
 protocol Combine.SchedulerTimeIntervalConvertible // 5 requirements
 {
	// class method
	// class method
	// class method
	// class method
	// class method
 }
 protocol Combine.Scheduler // 9 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// method
	// method
	// method
 }
 protocol Combine.CustomCombineIdentifierConvertible // 1 requirements
 {
	// getter
 }

 struct __C.os_unfair_recursive_lock_s {

	// Properties
	var ourl_lock : os_unfair_lock_s
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ourl_count : yf
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : yf
 }

 class Combine.Multicast {
 class Combine.Inner {
 enum Combine.Subscriptions { }

 class Combine.AnyCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var storage : Storage // +0x10 (0x29)
	let lock : os_unfair_lock_s // +0x40 (0x8)

	// Swift methods
	0x2760  class func AnyCancellable.__allocating_init(_:) // init 
	0x2890  class func AnyCancellable.__allocating_init<A>(_:) // init 
 }

 enum Combine.SubscriptionStatus {

	// Properties
	case subscribed : Subscription
	case pendingTerminal : Subscription
	case awaitingSubscription  
	case terminal  
 }

 enum Combine.Storage {

	// Properties
	case cancel : ()
	case cancellable : Cancellable
	case cancelled  
 }

 struct Combine._EmptySubscription: Cancellable,  Subscription {

	// Properties
	let combineIdentifier : CombineIdentifier // +0x0
 }

 struct Combine.SubscribeOn {

	// Properties
	let upstream : A
	let scheduler : B
	let options : Scheduler
 }

 class Combine.Inner {
 class Combine.FilterProducer {
 enum Combine.State {

	// Properties
	case connected : Subscription
	case awaitingSubscription  
	case completed  
 }

 struct Combine.MeasureInterval {

	// Properties
	let upstream : A
	let scheduler : B
 }

 class Combine.Inner {
 struct Combine.DropWhile {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryDropWhile {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.Record {

	// Properties
	let recording : Recording
 }

 struct Combine.Recording {

	// Properties
	var state : State
	var output : [A]
	var completion : Completion
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case input  
	case complete  
 }

 enum Combine.CodingKeys {

	// Properties
	case recording  
 }

 enum Combine.CodingKeys {

	// Properties
	case output  
	case completion  
 }

 struct Combine.Filter {

	// Properties
	let upstream : A
	let isIncluded : Publisher
 }

 struct Combine.TryFilter {

	// Properties
	let upstream : A
	let isIncluded : Publisher
 }

 class Combine.Inner {
 struct Combine.Inner {

	// Properties
	let downstream : A1
	let filter : Publisher
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Breakpoint {

	// Properties
	let upstream : A
	let receiveSubscription : Subscription
	let receiveOutput : Publisher
	let receiveCompletion : Completion
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let receiveSubscription : Subscription
	let receiveOutput : Publisher
	let receiveCompletion : Completion
	let combineIdentifier : CombineIdentifier
 }

 class Combine.WeakSubscriber {
 struct Combine.Deferred {

	// Properties
	let createPublisher : ()
 }

 struct Combine.AllSatisfy {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryAllSatisfy {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 class Combine.Sink {
 class Combine.AnySubscriberBase {
 class Combine.AnySubscriberBox {
 class Combine.ClosureBasedAnySubscriber {
 struct Combine.AnySubscriber {

	// Properties
	let box : AnySubscriberBase
	let descriptionThunk : ()
WARNING: couldn't find address 0x0 (0x0) in binary!
	let customMirrorThunk : ı_
	let playgroundDescriptionThunk : ()
	let combineIdentifier : CombineIdentifier
 }

 class Combine._ReferencedBasedAnySubscriber {
 struct Combine.RemoveDuplicates {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryRemoveDuplicates {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.Decode {

	// Properties
	let upstream : A
	let _decode : Publisher
 }

 class Combine.Inner {
 struct Combine.Encode {

	// Properties
	let upstream : A
	let _encode : TopLevelEncoder
 }

 class Combine.Inner {
 struct Combine.Just {

	// Properties
	let output : A
 }

 class Combine.Inner {
 class Combine.PublishedSubject {
 class Combine.Conduit {
 class Combine.PassthroughSubject {
 class Combine.Conduit {
 struct Combine.Contains {

	// Properties
	let upstream : A
	let output : Publisher
 }

 class Combine.Inner {
 struct Combine.CombineLatest {

	// Properties
	let a : A
	let b : B
 }

 struct Combine.CombineLatest3 {

	// Properties
	let a : A
	let b : B
	let c : C
 }

 struct Combine.CombineLatest4 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
 }

 class Combine.AbstractCombineLatest {
 class Combine.CombineLatest2Inner {
 class Combine.CombineLatest3Inner {
 class Combine.CombineLatest4Inner {
 struct Combine.Side {

	// Properties
	let index : Int
	let combiner : AbstractCombineLatest
 }

 struct Combine.Label {

	// Properties
	let upstream : A
	let name : String
	let category : Category
	let dsoHandle : UnsafeRawPointer?
 }

 struct Combine.Category {

	// Properties
	let rawValue : String
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let name : String
	let category : Category
	let dsoHandle : UnsafeRawPointer?
	let combineIdentifier : CombineIdentifier
 }

 class Combine.Autoconnect {
 struct Combine.Inner {

	// Properties
	var combineIdentifier : CombineIdentifier
	var parent : Autoconnect
	var downstream : A1
 }

 enum Combine.State {

	// Properties
	case connected : Cancellable
	case disconnected  
 }

 struct Combine.SideEffectSubscription {

	// Properties
	let onCancel : ()
	let upstreamSubscription : Subscription
 }

 struct Combine.Print {

	// Properties
	let prefix : String
	let upstream : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let stream : —W
 }

 class Combine.Inner {
 struct Combine.PrintTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stream : õW
 }

 class Combine.ObservableObjectPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : os_unfair_lock_s
	var connections : Conduit
	let identifier : ObjectIdentifier?

	// Swift methods
	0x33740  class func ObservableObjectPublisher.__allocating_init() // init 
 }

 class Combine.Conduit : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x32fa0  func ObservableObjectPublisher.Conduit.send() // method 
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case initialized  
	case active  
	case terminal  
 }

 struct Combine.ObservableObjectTable { }

 struct Combine.Storage {

	// Properties
	var object : weak Swift.AnyObject? // +0x0
	var identifier : ObjectIdentifier // +0x8
 }

 struct Combine.PrefixWhile {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryPrefixWhile {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 class Combine.Future {
 class Combine.Conduit {
 struct Combine.Empty {

	// Properties
	let completeImmediately : Bool
 }

 struct Combine.SetFailureType {

	// Properties
	let upstream : A
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Publisher {

	// Properties
	let output : A?
 }

 class Combine.Inner {
 struct Combine.ContainsWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryContainsWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 enum Combine.Publishers { }

 struct Combine.Published {

	// Properties
	var storage : Storage
 }

 struct Combine.Publisher {

	// Properties
	let subject : PublishedSubject
 }

 enum Combine.Storage {

	// Properties
	case value : A
	case publisher : Publisher
 }

 struct Combine.PublishedSubscriber {

	// Properties
	let combineIdentifier : CombineIdentifier
	var subject : PublishedSubject
 }

 struct Combine.MakeConnectable: ConnectablePublisher {

	// Properties
	var inner : Multicast
 }

 enum Combine.TimeGroupingStrategy {

	// Properties
	case byTime : Scheduler
	case byTimeOrCount : Scheduler
 }

 struct Combine.CollectByTime {

	// Properties
	let upstream : A
	let strategy : TimeGroupingStrategy
	let options : Scheduler
 }

 class Combine.Inner {
 struct Combine.Collect {

	// Properties
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.CollectByCount {

	// Properties
	let upstream : A
	let count : Int
 }

 class Combine.Inner {
 class Combine.Inner {
 struct Combine.ReceiveOn {

	// Properties
	let upstream : A
	let scheduler : B
	let options : Scheduler
 }

 class Combine.Inner {
 enum Combine.Subscribers { }

 enum Combine.Completion {

	// Properties
	case failure : A
	case finished  
 }

 struct Combine.Demand {

	// Properties
	let rawValue : UInt // +0x0
 }

 enum Combine.CodingKeys {

	// Properties
	case success  
	case error  
 }

 class Combine.ReduceProducer {
 struct Combine.MapKeyPath {

	// Properties
	let upstream : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath : ùS
 }

 struct Combine.MapKeyPath2 {

	// Properties
	let upstream : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath0 : ùS
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath1 : S
 }

 struct Combine.MapKeyPath3 {

	// Properties
	let upstream : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath0 : ùS
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath1 : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath2 : _S
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath0 : ùS
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath1 : S
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath2 : _S
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath0 : ùS
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath1 : S
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath : ùS
	let combineIdentifier : CombineIdentifier
 }

 class Combine.DebugHook : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var lock : os_unfair_lock_s
	var handlers : Handler

	// Swift methods
 }

 struct Combine.Handler {

	// Properties
	var handler : _Introspection // +0x0
 }

 struct Combine.SubscriberTap: SubscriberTapMarker {

	// Properties
	var subscriber : A
	var $__lazy_storage_$_inner : Any?
 }

 struct Combine.SubscriptionTap {

	// Properties
	var subscription : Subscription // +0x0
 }

 class Combine.ConduitBase {
 enum Combine.ConduitList {

	// Properties
	case single : ConduitBase
	case many : ConduitBase
	case empty  
 }

 struct Combine.PrefixUntilOutput {

	// Properties
	let upstream : A
	let other : B
 }

 class Combine.Inner {
 struct Combine.Termination {

	// Properties
	var inner : Inner
 }

 class Combine.SubjectSubscriber {
 struct Combine.Reduce {

	// Properties
	let upstream : A
	let initial : B
	let nextPartialResult : Publisher
 }

 class Combine.Inner {
 struct Combine.TryReduce {

	// Properties
	let upstream : A
	let initial : B
	let nextPartialResult : Publisher
 }

 class Combine.Inner {
 struct Combine.CompactMap {

	// Properties
	let upstream : A
	let transform : Publisher
 }

 struct Combine.TryCompactMap {

	// Properties
	let upstream : A
	let transform : Publisher
 }

 class Combine.Inner {
 struct Combine.Inner {

	// Properties
	let downstream : A1
	let filter : Publisher
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Merge {

	// Properties
	let a : A
	let b : B
 }

 struct Combine.Merge3 {

	// Properties
	let a : A
	let b : B
	let c : C
 }

 struct Combine.Merge4 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
 }

 struct Combine.Merge5 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
	let e : E
 }

 struct Combine.Merge6 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
	let e : E
	let f : F
 }

 struct Combine.Merge7 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
	let e : E
	let f : F
	let g : G
 }

 struct Combine.Merge8 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
	let e : E
	let f : F
	let g : G
	let h : H
 }

 struct Combine.MergeMany {

	// Properties
	let publishers : [A]
 }

 class Combine._Merged {
 struct Combine.Side {

	// Properties
	let index : Int
	let merger : _Merged
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Publisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let result : ON
 }

 class Combine.Inner {
 class Combine.Inner {
 class Combine.Inner {
 enum Combine.PartialCompletion {

	// Properties
	case continue : A
	case failure : B
	case finished  
 }

 struct Combine.Scan {

	// Properties
	let upstream : A
	let initialResult : B
	let nextPartialResult : Publisher
 }

 class Combine.Inner {
 struct Combine.TryScan {

	// Properties
	let upstream : A
	let initialResult : B
	let nextPartialResult : Publisher
 }

 class Combine.Inner {
 struct Combine.ImmediateScheduler { }

 struct Combine.SchedulerTimeType { }

 struct Combine.Stride {

	// Properties
	var magnitude : Int // +0x0
 }

 enum Combine.CodingKeys {

	// Properties
	case magnitude  
 }

 struct Combine.Count {

	// Properties
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.LastWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryLastWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.IgnoreOutput {

	// Properties
	let upstream : A
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let combineIdentifier : CombineIdentifier
 }

 class Combine.CurrentValueSubject {
 class Combine.Conduit {
 class Combine.Assign {
 struct Combine.SwitchToLatest {

	// Properties
	let upstream : B
 }

 class Combine.Outer {
 struct Combine.Side {

	// Properties
	let index : Int
	let inner : Outer
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Retry {

	// Properties
	let upstream : A
	let retries : Int?
 }

 class Combine.Inner {
 enum Combine.Chances {

	// Properties
	case finite : Int
	case infinite  
 }

 enum Combine.State {

	// Properties
	case ready : (A, A1)
	case terminal  
 }

 struct Combine.MapError {

	// Properties
	let upstream : A
	let transform : Publisher
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let map : Publisher
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Throttle {

	// Properties
	let upstream : A
	let interval : Scheduler
	let scheduler : B
	let latest : Bool
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : Throttle
	case subscribed : Throttle
	case terminal  
 }

 class Combine.Share {
 struct Combine.Comparison {

	// Properties
	let upstream : A
	let areInIncreasingOrder : Publisher
 }

 class Combine.Inner {
 struct Combine.TryComparison {

	// Properties
	let upstream : A
	let areInIncreasingOrder : Publisher
 }

 class Combine.Inner {
 struct Combine.ReplaceEmpty {

	// Properties
	let output : Publisher
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.ReplaceError {

	// Properties
	let output : Publisher
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.AssertNoFailure {

	// Properties
	let upstream : A
	let prefix : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let file : QF
	let line : UInt
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let prefix : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let file : QF
	let line : UInt
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.DropUntilOutput {

	// Properties
	let upstream : A
	let other : B
 }

 class Combine.Inner {
 struct Combine.OtherSubscriber {

	// Properties
	let inner : Inner
 }

 struct Combine.HandleEvents {

	// Properties
	let upstream : A
	var receiveSubscription : Subscription
	var receiveOutput : Publisher
	var receiveCompletion : Completion
	var receiveCancel : ()?
	var receiveRequest : Demand
 }

 class Combine.Inner {
 struct Combine.Concatenate {

	// Properties
	let prefix : A
	let suffix : B
 }

 class Combine.Inner {
 struct Combine.PrefixSubscriber {

	// Properties
	let inner : Inner
 }

 struct Combine.SuffixSubscriber {

	// Properties
	let inner : Inner
 }

 struct Combine.CombineIdentifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : SF // +0x0
 }

 struct Combine.Debounce {

	// Properties
	let upstream : A
	let dueTime : Scheduler
	let scheduler : B
	let options : Scheduler
 }

 class Combine.Inner {
 enum Combine.CancellerState {

	// Properties
	case active : Cancellable
	case pending  
	case cancelled  
 }

 struct Combine.Fail {

	// Properties
	let error : B
 }

 struct Combine.Last {

	// Properties
	let upstream : A
 }

 class Combine.Inner {
 class Combine.PublisherBoxBase {
 class Combine.PublisherBox {
 struct Combine.AnyPublisher {

	// Properties
	let box : PublisherBoxBase
 }

 struct Combine.Map {

	// Properties
	let upstream : A
	let transform : Publisher
 }

 struct Combine.TryMap {

	// Properties
	let upstream : A
	let transform : Publisher
 }

 class Combine.Inner {
 struct Combine.Inner {

	// Properties
	let downstream : A1
	let map : Publisher
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Timeout {

	// Properties
	let upstream : A
	let interval : Scheduler
	let scheduler : B
	let options : Scheduler
	let customError : Publisher
 }

 class Combine.Inner {
 enum Combine.PrefetchStrategy {

	// Properties
	case keepFull  
	case byRequest  
 }

 enum Combine.BufferingStrategy {

	// Properties
	case customError : ()
	case dropNewest  
	case dropOldest  
 }

 struct Combine.Buffer {

	// Properties
	let upstream : A
	let size : Int
	let prefetch : PrefetchStrategy
	let whenFull : BufferingStrategy
 }

 class Combine.Inner {
 struct Combine.Sequence {

	// Properties
	let sequence : A
 }

 class Combine.Inner {
 struct Combine.Zip {

	// Properties
	let a : A
	let b : B
 }

 struct Combine.Zip3 {

	// Properties
	let a : A
	let b : B
	let c : C
 }

 struct Combine.Zip4 {

	// Properties
	let a : A
	let b : B
	let c : C
	let d : D
 }

 class Combine.AbstractZip {
 class Combine.Zip2Inner {
 class Combine.Zip3Inner {
 class Combine.Zip4Inner {
 struct Combine.Side {

	// Properties
	let index : Int
	let zip : AbstractZip
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Output {

	// Properties
	let upstream : A
	let range : Range<Int>
 }

 class Combine.Inner {
 struct Combine.Catch {

	// Properties
	let upstream : A
	let handler : Publisher
 }

 class Combine.Inner {
 struct Combine.TryCatch {

	// Properties
	let upstream : A
	let handler : Publisher
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case pre : Subscription
	case post : Subscription
	case pendingPre  
	case pendingPost  
	case cancelled  
 }

 enum Combine.State {

	// Properties
	case pre : Subscription
	case post : Subscription
	case pendingPre  
	case pendingPost  
	case cancelled  
 }

 struct Combine.UncaughtS {

	// Properties
	let inner : Inner
 }

 struct Combine.UncaughtS {

	// Properties
	let inner : Inner
 }

 struct Combine.CaughtS {

	// Properties
	let inner : Inner
 }

 struct Combine.CaughtS {

	// Properties
	let inner : Inner
 }

 struct Combine.FlatMap {

	// Properties
	let upstream : B
	let maxPublishers : Demand
	let transform : Publisher
 }

 class Combine.Outer {
 struct Combine.Side {

	// Properties
	let index : Int
	let outer : Outer
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Delay {

	// Properties
	let upstream : A
	let interval : Scheduler
	let tolerance : Scheduler
	let scheduler : B
	let options : Scheduler
 }

 class Combine.Inner {
 struct Combine.Drop {

	// Properties
	let upstream : A
	let count : Int
 }

 class Combine.Inner {
 struct Combine.First {

	// Properties
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.FirstWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
 struct Combine.TryFirstWhere {

	// Properties
	let upstream : A
	let predicate : Publisher
 }

 class Combine.Inner {
