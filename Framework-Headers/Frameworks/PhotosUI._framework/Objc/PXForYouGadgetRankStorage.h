//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadgetRankStorage-Protocol.h>

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage>
{
}

- (id)_keyForGadgetType:(unsigned long long)arg1;
- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)resetStoredRanks;
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;

@end
