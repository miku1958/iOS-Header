//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDAnchor.h>

__attribute__((visibility("hidden")))
@interface CHDAbsoluteSizeAnchor : CHDAnchor
{
    struct CGPoint mFrom;
    struct CGSize mSize;
}

- (struct CGPoint)from;
- (void)setFrom:(struct CGPoint)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;

@end
