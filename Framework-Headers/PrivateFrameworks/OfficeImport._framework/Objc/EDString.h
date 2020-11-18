//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDPhoneticInfo, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDString : NSObject <NSCopying, EDImmutableObject>
{
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    BOOL mDoNotModify;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)edStringWithString:(id)arg1;
+ (id)edStringWithString:(id)arg1 runs:(id)arg2;
+ (id)string;
- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (BOOL)areThereRuns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)firstFont;
- (id)firstRunEffects;
- (id)firstRunFont;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEDString:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)phoneticInfo;
- (void)prependString:(id)arg1;
- (void)removeCharacterAtIndex:(unsigned long long)arg1;
- (void)removeCharactersInSet:(id)arg1;
- (id)runs;
- (void)setDoNotModify:(BOOL)arg1;
- (void)setPhoneticInfo:(id)arg1;
- (void)setRuns:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
