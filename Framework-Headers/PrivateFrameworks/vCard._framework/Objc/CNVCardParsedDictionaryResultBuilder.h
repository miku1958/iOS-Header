//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParsedResultBuilder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    NSMutableDictionary *_dictionaryRep;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)factory;
- (void).cxx_destruct;
- (id)build;
- (BOOL)canSetValueForProperty:(id)arg1;
- (id)init;
- (BOOL)setImageData:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (void)setUnknownProperties:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (id)validCountryCodes;
- (id)valueForProperty:(id)arg1;

@end

