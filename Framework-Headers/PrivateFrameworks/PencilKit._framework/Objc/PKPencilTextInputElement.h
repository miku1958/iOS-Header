//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface PKPencilTextInputElement : NSObject
{
    id<NSObject><NSCopying> _identifier;
    struct CGRect _frame;
}

@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 frame:(struct CGRect)arg2;

@end
