//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHOrderedStrokeGroup : CHStrokeGroup
{
    NSArray *_orderedStrokeIdentifiers;
}

@property (readonly, strong, nonatomic) NSArray *orderedStrokeIdentifiers; // @synthesize orderedStrokeIdentifiers=_orderedStrokeIdentifiers;

- (void)dealloc;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint)arg9 orderedStrokeIdentifiers:(id)arg10;
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect)arg6 classification:(long long)arg7 groupingConfidence:(double)arg8 strategyIdentifier:(id)arg9 firstStrokeOrigin:(struct CGPoint)arg10 orderedStrokeIdentifiers:(id)arg11;

@end
