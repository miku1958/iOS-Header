//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemSizing-Protocol.h>

@class NSString;

@interface SVVideoAccessoryItemSizer : NSObject <SVVideoAccessoryItemSizing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGRect)frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGRect)frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGPoint)originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize)arg2 itemSize:(struct CGSize)arg3;
- (struct CGPoint)originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize)arg2 itemSize:(struct CGSize)arg3;
- (struct CGSize)sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;

@end
