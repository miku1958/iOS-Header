//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AXUIClient;

@interface AXContainerManager : NSObject
{
    AXUIClient *_containerServerClient;
}

@property (strong, nonatomic) AXUIClient *containerServerClient; // @synthesize containerServerClient=_containerServerClient;

+ (id)sharedManager;
- (void)dealloc;
- (void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

