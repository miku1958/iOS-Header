//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TUCommandType;

@protocol TUCommandCenterType
- (void)addContextProvider:(id)arg1 forCommand:(id<TUCommandType>)arg2 completion:(void (^)(NSObject *))arg3;
- (BOOL)canExecuteCommand:(id<TUCommandType>)arg1;
- (void)executeCommand:(id<TUCommandType>)arg1;
- (void)removeContextProvider:(id)arg1;
- (void)removeContextProvider:(id)arg1 forCommand:(id<TUCommandType>)arg2;
- (long long)stateForCommand:(id<TUCommandType>)arg1;
@end

