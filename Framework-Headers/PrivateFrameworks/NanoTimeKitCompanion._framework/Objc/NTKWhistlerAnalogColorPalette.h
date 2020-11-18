//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice;

@interface NTKWhistlerAnalogColorPalette : NSObject
{
    CLKDevice *_device;
    BOOL _canShowMonochrome;
}

+ (id)swatchColorForColor:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)bezelTextColorForColor:(unsigned long long)arg1;
- (id)complicationForegroundColor:(unsigned long long)arg1;
- (id)dialFillColorForColor:(unsigned long long)arg1;
- (id)handFillColorForColor:(unsigned long long)arg1;
- (id)handStrokeColorForColor:(unsigned long long)arg1;
- (id)hourTicksColorForColor:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (id)mainColorForColor:(unsigned long long)arg1;
- (id)minuteTicksColorForColor:(unsigned long long)arg1;
- (id)platterTextColorForColor:(unsigned long long)arg1;
- (id)secondHandColorForColor:(unsigned long long)arg1;

@end
