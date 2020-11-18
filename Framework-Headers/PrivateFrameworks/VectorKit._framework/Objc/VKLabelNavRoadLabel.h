//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol VKLabelNavFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadLabel : NSObject
{
    shared_ptr_93ff9d4a _label;
    int _navLabelType;
    id<VKLabelNavFeature> _navFeature;
    NSString *_displayGroup;
    unsigned char _alignment;
    float _desiredOffsetDistance;
    unsigned int _displayID;
}

@property (nonatomic) unsigned char alignment; // @synthesize alignment=_alignment;
@property (nonatomic) float desiredOffsetDistance; // @synthesize desiredOffsetDistance=_desiredOffsetDistance;
@property (nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property (readonly, nonatomic) BOOL isJunctionLabel;
@property (readonly, nonatomic) BOOL isManeuverLabel;
@property (readonly, nonatomic) BOOL isRoadLabel;
@property (readonly, nonatomic) BOOL isShieldLabel;
@property (readonly, nonatomic) const shared_ptr_93ff9d4a *label; // @synthesize label=_label;
@property (nonatomic) id<VKLabelNavFeature> navFeature; // @synthesize navFeature=_navFeature;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)displayGroup;
- (id)initWithNavFeature:(id)arg1 label:(const shared_ptr_93ff9d4a *)arg2 navLabelType:(int)arg3;
- (void)layoutWithNavContext:(struct NavContext *)arg1;

@end

