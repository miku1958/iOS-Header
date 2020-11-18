//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXResource-Protocol.h>

@class NSString;

@protocol SXImageResource <SXResource>

@property (readonly, nonatomic) struct CGSize dimensions;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) BOOL wideColorSpace;

- (double)heightForImageWidth:(double)arg1;
- (struct CGSize)sizeThatFills:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)widthForImageHeight:(double)arg1;
@end

