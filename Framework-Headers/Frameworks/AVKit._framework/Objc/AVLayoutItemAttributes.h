//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVLayoutItemAttributes : NSObject <NSCopying>
{
    BOOL _hasFlexibleContentSize;
    BOOL _prefersSecondaryMaterialOverlay;
    BOOL _collapsed;
    BOOL _included;
    unsigned long long _displayPriority;
    AVLayoutItemAttributes *_displayPartnerAttributes;
    double _trailingInterItemSpace;
    NSString *_accessibilityIdentifier;
    AVLayoutItemAttributes *_nextAttributesInLayoutOrder;
    AVLayoutItemAttributes *_nextAttributesInPriorityOrder;
    NSString *_uniqueIdentifier;
    struct CGSize _minimumSize;
}

@property (copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (weak) AVLayoutItemAttributes *displayPartnerAttributes; // @synthesize displayPartnerAttributes=_displayPartnerAttributes;
@property (nonatomic) unsigned long long displayPriority; // @synthesize displayPriority=_displayPriority;
@property (nonatomic) BOOL hasFlexibleContentSize; // @synthesize hasFlexibleContentSize=_hasFlexibleContentSize;
@property (nonatomic, getter=isIncluded) BOOL included; // @synthesize included=_included;
@property (nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property (strong, nonatomic) AVLayoutItemAttributes *nextAttributesInLayoutOrder; // @synthesize nextAttributesInLayoutOrder=_nextAttributesInLayoutOrder;
@property (weak, nonatomic) AVLayoutItemAttributes *nextAttributesInPriorityOrder; // @synthesize nextAttributesInPriorityOrder=_nextAttributesInPriorityOrder;
@property (nonatomic) BOOL prefersSecondaryMaterialOverlay; // @synthesize prefersSecondaryMaterialOverlay=_prefersSecondaryMaterialOverlay;
@property (nonatomic) double trailingInterItemSpace; // @synthesize trailingInterItemSpace=_trailingInterItemSpace;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
