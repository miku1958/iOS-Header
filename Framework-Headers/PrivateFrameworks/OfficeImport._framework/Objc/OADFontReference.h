//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <NSCopying>
{
    int mIndex;
    OADColor *mColor;
}

- (void).cxx_destruct;
- (void)applyToParagraphProperties:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (int)index;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setIndex:(int)arg1;

@end
