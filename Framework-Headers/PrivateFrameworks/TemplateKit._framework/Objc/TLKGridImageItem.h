//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKArrangementItem.h>

#import <TemplateKit/TLKGridArrangementItem-Protocol.h>

@class NSString, NUISizeCache;

__attribute__((visibility("hidden")))
@interface TLKGridImageItem : TLKArrangementItem <TLKGridArrangementItem>
{
    unsigned long long row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    struct _NSRange columnRange;
    struct CGRect frame;
}

@property (nonatomic) struct _NSRange columnRange; // @synthesize columnRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect frame; // @synthesize frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalCompressionResistance; // @synthesize horizontalCompressionResistance;
@property (nonatomic) double horizontalHuggingPriority; // @synthesize horizontalHuggingPriority;
@property (nonatomic) unsigned long long row; // @synthesize row;
@property (strong, nonatomic) NUISizeCache *sizeCache; // @synthesize sizeCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)sizeForTargetSize:(struct CGSize)arg1;

@end

