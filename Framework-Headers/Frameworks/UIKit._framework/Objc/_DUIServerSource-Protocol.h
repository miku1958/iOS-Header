//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIDraggingSessionConfiguration;
@protocol _DUIClientSessionSource;

@protocol _DUIServerSource
- (oneway void)beginDragWithClientSession:(id<_DUIClientSessionSource>)arg1 configuration:(UIDraggingSessionConfiguration *)arg2 reply:(void (^)(unsigned int, id<_DUIServerSessionSource>))arg3;
- (oneway void)warmUp;
@end
