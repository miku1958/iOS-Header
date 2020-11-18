//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIDropProposal : NSObject <NSCopying>
{
    BOOL _precise;
    BOOL _prefersFullSizePreview;
    unsigned long long _operation;
    long long _preferredBadgeStyle;
}

@property (nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property (nonatomic, getter=isPrecise) BOOL precise; // @synthesize precise=_precise;
@property (nonatomic, getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:) long long preferredBadgeStyle; // @synthesize preferredBadgeStyle=_preferredBadgeStyle;
@property (nonatomic) BOOL prefersFullSizePreview; // @synthesize prefersFullSizePreview=_prefersFullSizePreview;

+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDropOperation:(unsigned long long)arg1;

@end

