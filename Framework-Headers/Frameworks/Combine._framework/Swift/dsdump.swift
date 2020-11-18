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
 protocol Combine.DebugHandler // 12 requirements
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
	var ourl_count : UInt32
 }

 struct __C.os_unfair_lock_s {

	// Properties
	var _os_unfair_lock_opaque : UInt32
 }

 class Combine.Multicast {
 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : (A, A1)
	case subscribed : (A, A1, Subscription)
	case terminal  
 }

 enum Combine.Subscriptions { }

 class Combine.AnyCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var _cancel : ()? // +0x10 (0x10)

	// Swift methods
	0x4830  class func AnyCancellable.__allocating_init(_:) // init 
	0x48d0  class func AnyCancellable.__allocating_init<A>(_:) // init 
	0x4be0  func AnyCancellable.hashValue.getter // getter 
 }

 enum Combine.SubscriptionStatus {

	// Properties
	case subscribed : Subscription
	case awaitingSubscription  
	case terminal  
 }

 struct Combine._EmptySubscription: Cancellable,  Subscription {

	// Properties
	let combineIdentifier : CombineIdentifier // +0x0
 }

 struct Combine.SubscribeOn {

	// Properties
	let upstream : A
	let scheduler : B
	let options : B.Scheduler.SchedulerOptions?
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : (Publishers.SubscribeOn<A, B>, A1)
	case subscribed : (Publishers.SubscribeOn<A, B>, A1, Subscription)
	case terminal  
 }

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
 enum Combine.State {

	// Properties
	case ready : (Publishers.MeasureInterval<A, B>, A1)
	case subscribed : (Publishers.MeasureInterval<A, B>, A1, Subscription)
	case terminal  
 }

 struct Combine.DropWhile {

	// Properties
	let upstream : A
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryDropWhile {

	// Properties
	let upstream : A
	let predicate : (_:)
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
	var completion : Subscribers.Completion<B>
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
	let isIncluded : (_:)
 }

 class Combine.Inner {
 struct Combine.TryFilter {

	// Properties
	let upstream : A
	let isIncluded : (_:)
 }

 class Combine.Inner {
 struct Combine.Breakpoint {

	// Properties
	let upstream : A
	let receiveSubscription : (_:)?
	let receiveOutput : (_:)?
	let receiveCompletion : (_:)?
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	var breakpoint : Publishers.Breakpoint<A>
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
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryAllSatisfy {

	// Properties
	let upstream : A
	let predicate : (_:)
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
	let customMirrorThunk : ()
	let playgroundDescriptionThunk : ()
	let combineIdentifier : CombineIdentifier
 }

 class Combine._ReferencedBasedAnySubscriber {
 class Combine._DequeRef {
 struct Combine.Deque {

	// Properties
	var _ref : _DequeRef
 }

 struct Combine.RemoveDuplicates {

	// Properties
	let upstream : A
	let predicate : (_:_:)
 }

 class Combine.Inner {
 struct Combine.TryRemoveDuplicates {

	// Properties
	let upstream : A
	let predicate : (_:_:)
 }

 class Combine.Inner {
 struct Combine.Decode {

	// Properties
	let upstream : A
	let _decode : (_:)
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
 class Combine.PassthroughSubject {
 class Combine.Conduit {
 struct Combine.Contains {

	// Properties
	let upstream : A
	let output : A.Publisher.Output
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

 struct Combine.SubscriberList {

	// Properties
	var items : [Unmanaged<Swift.AnyObject>] // +0x0
	var tickets : [Int] // +0x8
	var nextTicket : Int // +0x10
 }

 class Combine.Autoconnect {
 enum Combine.State {

	// Properties
	case connected : (Int, Cancellable)
	case disconnected  
 }

 struct Combine.Inner {

	// Properties
	var combineIdentifier : CombineIdentifier
	var parent : Publishers.Autoconnect<A>
	var downstream : A1
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
	let stream : TextOutputStream?
 }

 class Combine.Inner {
 struct Combine.PrintTarget {

	// Properties
	var stream : TextOutputStream
 }

 class Combine.ObservableObjectPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let subject : PassthroughSubject<(), Never> // +0x10 (0x8)

	// Swift methods
	0x38440  class func ObservableObjectPublisher.__allocating_init() // init 
 }

 struct Combine.PrefixWhile {

	// Properties
	let upstream : A
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryPrefixWhile {

	// Properties
	let upstream : A
	let predicate : (_:)
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
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryContainsWhere {

	// Properties
	let upstream : A
	let predicate : (_:)
 }

 class Combine.Inner {
 enum Combine.Publishers { }

 struct Combine.Published {

	// Properties
	var value : A
	var publisher : Publisher
	var objectWillChange : ObservableObjectPublisher?
 }

 struct Combine.Publisher {

	// Properties
	let subject : CurrentValueSubject<A, Never>
 }

 struct Combine.MakeConnectable: ConnectablePublisher {

	// Properties
	var inner : Publishers.Multicast<A, PassthroughSubject<A.Publisher.Output, A.Publisher.Failure>>
 }

 enum Combine.TimeGroupingStrategy {

	// Properties
	case byTime : (A, A.Scheduler.SchedulerTimeType.Strideable.Stride)
	case byTimeOrCount : (A, A.Scheduler.SchedulerTimeType.Strideable.Stride, Int)
 }

 struct Combine.CollectByTime {

	// Properties
	let upstream : A
	let strategy : TimeGroupingStrategy
	let options : B.Scheduler.SchedulerOptions?
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
	let options : B.Scheduler.SchedulerOptions?
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : (Publishers.ReceiveOn<A, B>, A1)
	case subscribed : (Publishers.ReceiveOn<A, B>, A1, Subscription)
	case terminal  
 }

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
	let keyPath : KeyPath<A.Publisher.Output, B>
 }

 struct Combine.MapKeyPath2 {

	// Properties
	let upstream : A
	let keyPath0 : KeyPath<A.Publisher.Output, B>
	let keyPath1 : KeyPath<A.Publisher.Output, C>
 }

 struct Combine.MapKeyPath3 {

	// Properties
	let upstream : A
	let keyPath0 : KeyPath<A.Publisher.Output, B>
	let keyPath1 : KeyPath<A.Publisher.Output, C>
	let keyPath2 : KeyPath<A.Publisher.Output, D>
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let keyPath0 : KeyPath<A.Publisher.Output, B>
	let keyPath1 : KeyPath<A.Publisher.Output, C>
	let keyPath2 : KeyPath<A.Publisher.Output, D>
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let keyPath0 : KeyPath<A.Publisher.Output, B>
	let keyPath1 : KeyPath<A.Publisher.Output, C>
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let keyPath : KeyPath<A.Publisher.Output, B>
	let combineIdentifier : CombineIdentifier
 }

 class Combine.DebugHook : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var lock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)
	var handlers : Handler // +0x18 (0x8)

	// Swift methods
 }

 struct Combine.Handler {

	// Properties
	var handler : DebugHandler // +0x0
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

 struct Combine.PrefixUntilOutput {

	// Properties
	let upstream : A
	let other : B
 }

 class Combine.Inner {
 struct Combine.Termination {

	// Properties
	var inner : Publishers.PrefixUntilOutput<A, B>.Inner<A1, B1>
 }

 struct Combine.Prefix {

	// Properties
	var inner : Publishers.PrefixUntilOutput<A, B>.Inner<A1, B1>
 }

 class Combine.SubjectSubscriber {
 struct Combine.Reduce {

	// Properties
	let upstream : A
	let initial : B
	let nextPartialResult : (_:_:)
 }

 class Combine.Inner {
 struct Combine.TryReduce {

	// Properties
	let upstream : A
	let initial : B
	let nextPartialResult : (_:_:)
 }

 class Combine.Inner {
 struct Combine.CompactMap {

	// Properties
	let upstream : A
	let transform : (_:)
 }

 class Combine.Inner {
 struct Combine.TryCompactMap {

	// Properties
	let upstream : A
	let transform : (_:)
 }

 class Combine.Inner {
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
	let result : Result<A, B>
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
	let nextPartialResult : (_:_:)
 }

 class Combine.Inner {
 struct Combine.TryScan {

	// Properties
	let upstream : A
	let initialResult : B
	let nextPartialResult : (_:_:)
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
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryLastWhere {

	// Properties
	let upstream : A
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.IgnoreOutput {

	// Properties
	let upstream : A
 }

 class Combine.Inner {
 class Combine.CurrentValueSubject {
 class Combine.Conduit {
 class Combine.Assign {
 struct Combine.SwitchToLatest {

	// Properties
	let upstream : B
 }

 class Combine.Outer {
 class Combine.InnerLatest {
 struct Combine.RoutingSubscription {

	// Properties
	let _parent : Outer
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
	let transform : (_:)
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let map : (_:)
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Throttle {

	// Properties
	let upstream : A
	let interval : B.Scheduler.SchedulerTimeType.Strideable.Stride
	let scheduler : B
	let latest : Bool
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : (Publishers.Throttle<A, B>, A1)
	case subscribed : (Publishers.Throttle<A, B>, A1, Subscription, Subscribers.Completion<A1.Subscriber.Failure>?)
	case terminal  
 }

 class Combine.Share {
 struct Combine.Comparison {

	// Properties
	let upstream : A
	let areInIncreasingOrder : (_:_:)
 }

 class Combine.Inner {
 struct Combine.TryComparison {

	// Properties
	let upstream : A
	let areInIncreasingOrder : (_:_:)
 }

 class Combine.Inner {
 struct Combine.ReplaceEmpty {

	// Properties
	let output : A.Publisher.Output
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.ReplaceError {

	// Properties
	let output : A.Publisher.Output
	let upstream : A
 }

 class Combine.Inner {
 struct Combine.AssertNoFailure {

	// Properties
	let upstream : A
	let prefix : String
	let file : StaticString
	let line : UInt
 }

 struct Combine.Inner {

	// Properties
	let downstream : A1
	let prefix : String
	let file : StaticString
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
	var receiveSubscription : (_:)?
	var receiveOutput : (_:)?
	var receiveCompletion : (_:)?
	var receiveCancel : ()?
	var receiveRequest : (_:)?
 }

 class Combine.Inner {
 struct Combine.Concatenate {

	// Properties
	let prefix : A
	let suffix : B
 }

 class Combine.Inner {
 struct Combine.CombineIdentifier {

	// Properties
	var value : UInt64 // +0x0
 }

 struct Combine.Debounce {

	// Properties
	let upstream : A
	let dueTime : B.Scheduler.SchedulerTimeType.Strideable.Stride
	let scheduler : B
	let options : B.Scheduler.SchedulerOptions?
 }

 class Combine.Inner {
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
	let transform : (_:)
 }

 struct Combine.TryMap {

	// Properties
	let upstream : A
	let transform : (_:)
 }

 class Combine.Inner {
 struct Combine.Inner {

	// Properties
	let downstream : A1
	let map : (_:)
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Timeout {

	// Properties
	let upstream : A
	let interval : B.Scheduler.SchedulerTimeType.Strideable.Stride
	let scheduler : B
	let options : B.Scheduler.SchedulerOptions?
	let customError : ()?
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
 enum Combine.State {

	// Properties
	case ready : (Publishers.Buffer<A>, A1)
	case subscribed : (Publishers.Buffer<A>, A1, Subscription)
	case terminal  
 }

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
	let handler : (_:)
 }

 class Combine.Inner {
 struct Combine.TryCatch {

	// Properties
	let upstream : A
	let handler : (_:)
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
	let maxPublishers : Subscribers.Demand
	let transform : (_:)
 }

 class Combine.Inner {
 struct Combine.Side {

	// Properties
	let index : Int
	let inner : Inner
	let combineIdentifier : CombineIdentifier
 }

 struct Combine.Delay {

	// Properties
	let upstream : A
	let interval : B.Scheduler.SchedulerTimeType.Strideable.Stride
	let tolerance : B.Scheduler.SchedulerTimeType.Strideable.Stride
	let scheduler : B
	let options : B.Scheduler.SchedulerOptions?
 }

 class Combine.Inner {
 enum Combine.State {

	// Properties
	case ready : (Publishers.Delay<A, B>, A1)
	case subscribed : (Publishers.Delay<A, B>, A1, Subscription)
	case terminal  
 }

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
	let predicate : (_:)
 }

 class Combine.Inner {
 struct Combine.TryFirstWhere {

	// Properties
	let upstream : A
	let predicate : (_:)
 }

 class Combine.Inner {
