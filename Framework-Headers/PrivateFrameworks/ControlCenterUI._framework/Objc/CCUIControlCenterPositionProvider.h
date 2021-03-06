//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject
{
    NSArray *_packingRules;
    NSDictionary *_rectByIdentifier;
    struct CCUILayoutSize _layoutSize;
}

@property (readonly, nonatomic) struct CCUILayoutSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property (readonly, nonatomic) struct CCUILayoutSize maximumLayoutSize; // @dynamic maximumLayoutSize;

- (void).cxx_destruct;
- (id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(struct CCUILayoutPoint)arg4 maximumSize:(struct CCUILayoutSize)arg5 outputLayoutSize:(out struct CCUILayoutSize *)arg6;
- (id)initWithPackingRules:(id)arg1;
- (struct CCUILayoutRect)layoutRectForIdentifier:(id)arg1;
- (void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2;

@end

