//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/TSUDataFormat-Protocol.h>

@class NSString;

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString *mFormat;
    NSString *mName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)format;
- (id)formatName;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setFormatName:(id)arg1;

@end

