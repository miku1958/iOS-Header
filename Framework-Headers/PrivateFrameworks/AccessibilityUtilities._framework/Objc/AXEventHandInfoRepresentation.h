//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    unsigned char _systemGesturePossible;
    unsigned char _swipe;
    unsigned short _initialFingerCount;
    unsigned short _currentFingerCount;
    unsigned int _eventType;
    unsigned int _handIdentity;
    unsigned int _handIndex;
    unsigned int _handEventMask;
    unsigned int _additionalHandEventFlagsForGeneratedEvents;
    NSArray *_paths;
    struct CGPoint _handPosition;
}

@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents; // @synthesize additionalHandEventFlagsForGeneratedEvents=_additionalHandEventFlagsForGeneratedEvents;
@property (nonatomic) unsigned short currentFingerCount; // @synthesize currentFingerCount=_currentFingerCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property (nonatomic) unsigned int handEventMask; // @synthesize handEventMask=_handEventMask;
@property (nonatomic) unsigned int handIdentity; // @synthesize handIdentity=_handIdentity;
@property (nonatomic) unsigned int handIndex; // @synthesize handIndex=_handIndex;
@property (nonatomic) struct CGPoint handPosition; // @synthesize handPosition=_handPosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short initialFingerCount; // @synthesize initialFingerCount=_initialFingerCount;
@property (readonly, nonatomic) BOOL isStylus;
@property (readonly, nonatomic) unsigned long long length;
@property (strong, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char swipe; // @synthesize swipe=_swipe;
@property (nonatomic) unsigned char systemGesturePossible; // @synthesize systemGesturePossible=_systemGesturePossible;

+ (id)representationWithHandInfo:(CDStruct_f2c5c900 *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeToHandInfo:(CDStruct_f2c5c900 *)arg1;

@end

