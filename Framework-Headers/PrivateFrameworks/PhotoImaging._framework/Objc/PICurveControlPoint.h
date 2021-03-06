//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoImaging/NSCopying-Protocol.h>

@interface PICurveControlPoint : NSObject <NSCopying>
{
    BOOL _editable;
    double _x;
    double _y;
}

@property (readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (readonly, nonatomic) double x; // @synthesize x=_x;
@property (readonly, nonatomic) double y; // @synthesize y=_y;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

