//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentSlotDescription, NSArray, NSData, NSObject;

@protocol INIntentResolutionResultExport <NSObject, JSExport>

@property (strong, nonatomic) NSArray *alternatives;
@property (strong, nonatomic) NSArray *disambiguationItems;
@property (strong, nonatomic) NSObject *itemToConfirm;
@property (strong, nonatomic) NSObject *resolvedValue;
@property (nonatomic) unsigned long long unsupportedReason;

+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(NSArray *)arg2;
- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (id)init;
@end
