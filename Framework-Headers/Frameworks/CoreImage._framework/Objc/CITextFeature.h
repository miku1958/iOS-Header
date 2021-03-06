//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFeature.h>

@class NSArray, NSString;

@interface CITextFeature : CIFeature
{
    NSArray *subFeatures;
    NSString *messageString;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    struct CGRect bounds;
}

@property (readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft;
@property (readonly) struct CGPoint bottomRight; // @synthesize bottomRight;
@property (readonly) struct CGRect bounds; // @synthesize bounds;
@property (readonly) NSString *messageString; // @synthesize messageString;
@property (readonly) NSArray *subFeatures; // @synthesize subFeatures;
@property (readonly) struct CGPoint topLeft; // @synthesize topLeft;
@property (readonly) struct CGPoint topRight; // @synthesize topRight;

- (void)dealloc;
- (id)initWithBounds:(struct CGRect)arg1 topLeft:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5 subFeatures:(id)arg6 messageString:(id)arg7;
- (id)type;

@end

