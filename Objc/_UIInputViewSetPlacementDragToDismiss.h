//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacementOnScreen.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding>
{
    BOOL _dismissKeyboardOnly;
    double _offset;
}

@property (nonatomic) BOOL dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property (nonatomic) double offset; // @synthesize offset=_offset;

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (Class)applicatorClassForKeyboard:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

