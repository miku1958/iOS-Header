//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying>
{
    struct _NSRange _range;
    NSMutableArray *_attributesArray;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)range;
- (void)restoreAttributesOfTextStorage:(id)arg1;

@end

