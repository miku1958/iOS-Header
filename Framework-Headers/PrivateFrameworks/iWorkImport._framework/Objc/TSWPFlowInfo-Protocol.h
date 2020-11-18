//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>

@class NSArray, NSString, TSUColor, TSWPShapeInfo, TSWPStorage;

@protocol TSWPFlowInfo <NSObject, TSKDocumentObject>

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) TSWPStorage *textStorage;
@property (strong, nonatomic) NSArray *textboxes;
@property (readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property (nonatomic) unsigned long long userInterfaceIdentifier;
@property (readonly, nonatomic) TSUColor *userInterfaceStrokeColor;

+ (TSUColor *)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (TSUColor *)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;
- (NSString *)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(BOOL)arg2;
- (unsigned long long)indexOfTextBox:(TSWPShapeInfo *)arg1;
@end
