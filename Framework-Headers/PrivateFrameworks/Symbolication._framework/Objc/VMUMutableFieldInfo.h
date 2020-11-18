//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo
{
}

@property (strong, nonatomic) VMUClassInfo *destinationLayout; // @dynamic destinationLayout;
@property (nonatomic) unsigned int flags; // @dynamic flags;
@property (nonatomic) BOOL isByref; // @dynamic isByref;
@property (nonatomic) BOOL isCapture; // @dynamic isCapture;
@property (copy, nonatomic) NSString *ivarName; // @dynamic ivarName;
@property (nonatomic) unsigned int scanType; // @dynamic scanType;
@property (nonatomic) unsigned int scannableSize; // @dynamic scannableSize;
@property (nonatomic) unsigned int stride; // @dynamic stride;

- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1 parentOffset:(unsigned int)arg2;
- (BOOL)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)setOffset:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setTypeName:(id)arg1;

@end

