//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDCollection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    BOOL mDoNotModify;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)phoneticInfoWithResources:(id)arg1;
- (void).cxx_destruct;
- (int)align;
- (void)appendString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)font;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEDPhoneticInfo:(id)arg1;
- (void)prependString:(id)arg1;
- (id)runs;
- (void)setAlign:(int)arg1;
- (void)setDoNotModify:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (void)setType:(int)arg1;
- (id)string;
- (int)type;

@end

