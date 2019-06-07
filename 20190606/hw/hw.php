<?php
function find($data, $find) {
    $left = 0;
    $right = sizeof($data) - 1;
    while ($left <= $right) {
        $mid = floor($left+$right);
        if ($data[$mid] == $find) {
            return $mid;
        } else if ($data[$mid] > $find) {
            $right = $mid - 1;
        } else {
            $left  = $mid + 1;
        }
    }
    return -1;
}

echo find(array(1, 2, 3), 2);
