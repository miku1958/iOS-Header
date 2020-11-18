//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/NUIArrangementItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TLKArrangementItem : NSObject <NUIArrangementItem>
{
    struct CGSize _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly) Class superclass;

- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;

@end
