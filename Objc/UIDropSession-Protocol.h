//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSProgressReporting-Protocol.h>
#import <UIKit/UIDragDropSession-Protocol.h>

@class NSProgress;
@protocol UIDragSession;

@protocol UIDropSession <UIDragDropSession, NSProgressReporting>

@property (readonly, nonatomic) id<UIDragSession> localDragSession;
@property (nonatomic) unsigned long long progressIndicatorStyle;

- (NSProgress *)loadObjectsOfClass:(Class)arg1 completion:(void (^)(NSArray *))arg2;
@end

