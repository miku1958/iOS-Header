//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSCoding>
{
    REImage *_onePieceImage;
    REImage *_twoPieceForegroundImage;
    REImage *_twoPieceBackgroundImage;
}

@property (readonly, nonatomic) REImage *onePieceImage; // @synthesize onePieceImage=_onePieceImage;
@property (readonly, nonatomic) REImage *twoPieceBackgroundImage; // @synthesize twoPieceBackgroundImage=_twoPieceBackgroundImage;
@property (readonly, nonatomic) REImage *twoPieceForegroundImage; // @synthesize twoPieceForegroundImage=_twoPieceForegroundImage;

+ (id)imageContentProviderFromClockKitImageProvider:(id)arg1;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3;
- (void).cxx_destruct;
- (id)clockKitImageProviderRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3;

@end

