//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    CDStruct_73524d89 m_x;
    CDStruct_73524d89 m_y;
    CDStruct_73524d89 m_w;
    CDStruct_73524d89 m_h;
    CDStruct_73524d89 m_paddingTop;
    CDStruct_73524d89 m_paddingLeft;
    CDStruct_73524d89 m_paddingBottom;
    CDStruct_73524d89 m_paddingRight;
    BOOL m_explicitlySpecified;
    BOOL m_isTemplate;
}

@property (nonatomic) BOOL explicitlySpecified; // @synthesize explicitlySpecified=m_explicitlySpecified;
@property (nonatomic, setter=setH:) CDStruct_73524d89 h; // @synthesize h=m_h;
@property (nonatomic) BOOL isTemplate; // @synthesize isTemplate=m_isTemplate;
@property (strong, nonatomic) NSString *name; // @synthesize name=m_name;
@property (nonatomic, setter=setPaddingBottom:) CDStruct_73524d89 paddingBottom; // @synthesize paddingBottom=m_paddingBottom;
@property (nonatomic, setter=setPaddingLeft:) CDStruct_73524d89 paddingLeft; // @synthesize paddingLeft=m_paddingLeft;
@property (nonatomic, setter=setPaddingRight:) CDStruct_73524d89 paddingRight; // @synthesize paddingRight=m_paddingRight;
@property (nonatomic, setter=setPaddingTop:) CDStruct_73524d89 paddingTop; // @synthesize paddingTop=m_paddingTop;
@property (nonatomic, setter=setW:) CDStruct_73524d89 w; // @synthesize w=m_w;
@property (nonatomic, setter=setX:) CDStruct_73524d89 x; // @synthesize x=m_x;
@property (nonatomic, setter=setY:) CDStruct_73524d89 y; // @synthesize y=m_y;

+ (id)codeStringForValue:(CDStruct_73524d89)arg1;
+ (id)geometry;
+ (id)geometryWithOriginValue:(CDStruct_73524d89)arg1 sizeValue:(CDStruct_73524d89)arg2;
+ (id)geometryWithRect:(struct CGRect)arg1;
+ (void)performOperations:(CDUnknownBlockType)arg1 withScale:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)frame;
- (struct CGRect)frameWithContainingFrame:(struct CGRect)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initTemplateWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect)paddedFrameWithContainingFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrameWithResolvedFrame:(struct CGRect)arg1;
- (id)shortDescription;
- (BOOL)usesAutomaticMetrics;
- (BOOL)usesPercentages;

@end

