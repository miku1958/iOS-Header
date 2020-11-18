//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSString;
@protocol NURenderer;

@protocol NUDevice <NSObject>

@property (readonly, nonatomic) long long defaultSampleMode;
@property (readonly, nonatomic) unsigned long long family;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly, nonatomic) BOOL hasOpenGLSupport;
@property (readonly, nonatomic) id<NURenderer> lowPriorityRenderer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long openGLVirtualScreen;
@property (readonly, nonatomic) id<NURenderer> renderer;

@end

