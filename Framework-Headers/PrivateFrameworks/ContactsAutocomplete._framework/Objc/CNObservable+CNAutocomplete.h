//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@interface CNObservable (CNAutocomplete)
- (id)activityIndicatingObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 scheduler:(id)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)networkObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;
@end

