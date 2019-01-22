//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Ginny Fahs on 1/17/19.
//  Copyright © 2019 Ginny's Games. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

-(void)pinch:(UIPinchGestureRecognizer *)gesture;

@end

NS_ASSUME_NONNULL_END
