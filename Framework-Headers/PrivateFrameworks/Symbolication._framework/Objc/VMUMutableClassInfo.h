//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUClassInfo.h>

@class NSString;

@interface VMUMutableClassInfo : VMUClassInfo
{
}

@property (copy, nonatomic) NSString *binaryPath; // @dynamic binaryPath;
@property (nonatomic) unsigned int defaultScanType; // @dynamic defaultScanType;
@property (copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property (strong, nonatomic) VMUClassInfo *superclassInfo; // @dynamic superclassInfo;

- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)mutateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)setFields:(id)arg1;

@end

