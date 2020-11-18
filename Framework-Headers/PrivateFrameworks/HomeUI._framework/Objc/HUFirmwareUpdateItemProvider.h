//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HUInstructionsItem, HULinkedApplicationItemProvider, NSSet, NSString;

@interface HUFirmwareUpdateItemProvider : HFItemProvider
{
    BOOL _hasProvidedInstructionsItem;
    BOOL _instructionsHidden;
    CDUnknownBlockType _filter;
    unsigned long long _style;
    HUInstructionsItem *_instructionsItem;
    HULinkedApplicationItemProvider *_linkedApplicationItemProvider;
    NSSet *_linkedApplicationItems;
    NSString *_instructionsTitle;
    NSString *_instructionsDescription;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (nonatomic) BOOL hasProvidedInstructionsItem; // @synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem;
@property (strong, nonatomic) NSString *instructionsDescription; // @synthesize instructionsDescription=_instructionsDescription;
@property (nonatomic) BOOL instructionsHidden; // @synthesize instructionsHidden=_instructionsHidden;
@property (strong, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property (strong, nonatomic) NSString *instructionsTitle; // @synthesize instructionsTitle=_instructionsTitle;
@property (strong, nonatomic) HULinkedApplicationItemProvider *linkedApplicationItemProvider; // @synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider;
@property (strong, nonatomic) NSSet *linkedApplicationItems; // @synthesize linkedApplicationItems=_linkedApplicationItems;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

+ (CDUnknownBlockType)itemComparator;
+ (BOOL)prefersNonBlockingReloads;
- (void).cxx_destruct;
- (CDUnknownBlockType)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

