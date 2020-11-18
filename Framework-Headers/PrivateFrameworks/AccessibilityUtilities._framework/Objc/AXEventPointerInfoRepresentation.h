//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXEventRepresentation, NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    BOOL _pointerIsAbsolute;
    double _pointerX;
    double _pointerY;
    double _pointerZ;
    double _pointerAccelX;
    double _pointerAccelY;
    double _pointerAccelZ;
    double _pointerButtonMask;
    double _pointerButtonNumber;
    double _pointerButtonClickCount;
    double _pointerButtonPressure;
    AXEventRepresentation *_scrollEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pointerAccelX; // @synthesize pointerAccelX=_pointerAccelX;
@property (nonatomic) double pointerAccelY; // @synthesize pointerAccelY=_pointerAccelY;
@property (nonatomic) double pointerAccelZ; // @synthesize pointerAccelZ=_pointerAccelZ;
@property (nonatomic) double pointerButtonClickCount; // @synthesize pointerButtonClickCount=_pointerButtonClickCount;
@property (nonatomic) double pointerButtonMask; // @synthesize pointerButtonMask=_pointerButtonMask;
@property (nonatomic) double pointerButtonNumber; // @synthesize pointerButtonNumber=_pointerButtonNumber;
@property (nonatomic) double pointerButtonPressure; // @synthesize pointerButtonPressure=_pointerButtonPressure;
@property (nonatomic) BOOL pointerIsAbsolute; // @synthesize pointerIsAbsolute=_pointerIsAbsolute;
@property (nonatomic) double pointerX; // @synthesize pointerX=_pointerX;
@property (nonatomic) double pointerY; // @synthesize pointerY=_pointerY;
@property (nonatomic) double pointerZ; // @synthesize pointerZ=_pointerZ;
@property (strong, nonatomic) AXEventRepresentation *scrollEvent; // @synthesize scrollEvent=_scrollEvent;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
